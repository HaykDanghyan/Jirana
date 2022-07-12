/**
 * @file entity.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef ENTITIES_ENTITY_H
#define ENTITIES_ENTITY_H
#include <string>
namespace entities {
    class Entity {
    public:
        virtual std::string to_string(const std::string&) const = 0; 
    };
} // entities

#endif // ENTITIES_ENTITY_H