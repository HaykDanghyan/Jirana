#ifndef ENTITIES_TASK_H
#define ENTITIES_TASK_H
#include "entity.h"
#include "user.h"
#include <string>
namespace entities {
    class Task  : public Entity{
    public:
        Task() = default;
        explicit Task(const std::string& name) : m_name{name} {}
        Task(const Task&) = default;
        Task(Task&&) = default;
        ~Task() = default;

    public:
        Task& operator=(const Task&) = default;
        Task& operator=(Task&&) = default;

    public:
        void set_name(const std::string& name) {
            m_name = name;
        }
        std::string get_name() const {
            return m_name;
        }
        void set_deadline(const std::string& deadline) {
            m_deadline = deadline;
        }
        std::string get_deadline() const {
            return m_deadline;
        }
        void set_status(const std::string& status) {
            m_status = status;
        }
        void set_assignee(const User& user) {
            m_assignee = user;
        }
        User get_assignee() const {
            return m_assignee;
        }
    public:
        bool operator == (const Task& rhs) const {
            if(m_name != rhs.m_name){
                return false;
            }
            if(m_deadline != rhs.m_deadline) {
                return false;
            }
            if(m_assignee != rhs.m_assignee) {
                return false;
            }
            if(m_status != rhs.m_status) {
                return false;
            }
            return true;
        }

        bool operator != (const Task& rhs) const {
            return !(this -> operator==(rhs));
        }

        std::string to_string(const std::string& delimiter) const override {
            std::string result;
            result += m_name + delimiter;
            result += m_deadline + delimiter;
            result += m_assignee.to_string(delimiter) + delimiter;
            result += m_status;
            return result;
        }

    private:
        std::string m_name;
        std::string m_status;
        std::string m_deadline;
        User m_assignee;
    };
} // entities

#endif // ENTITIES_TASK_H