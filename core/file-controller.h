#ifndef CORE_FILE_CONTROLLER_H
#define CORE_FILE_CONTROLLER_H
#include <fstream>
#include <string>
#include "../entities/entity.h"
namespace core {
    class FileController {
    public:
        FileController() = delete;
       ~FileController() = delete;

    public:
        void save(const entities::Entity& entity) {
            std::fstream fileControl;
            fileControl.open("entities.txt", std::ios::in | std::ios::app | std::ios::out);
            if(fileControl.is_open()) {
                fileControl << entity.to_string(" | ");
            }
            // fileControl << entity.to_string(" | ");
            fileControl.close();
        }         
    };
} // core


#endif // CORE_FILE_CONTROLLER_H