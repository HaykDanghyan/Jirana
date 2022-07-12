#include <iostream>
#include "core/file-controller.h"
#include "entities/user.h"
#include "entities/project.h"
#include "entities/task.h"
#include <vector>

std::vector<entities::Project> projects;
std::vector<entities::User> users;
std::vector<entities::Task> tasks;


int main() {

    entities::User u1;
    u1.set_name("Name1");
    u1.set_email("name.surnameyan@gmail.com");
    entities::User u2;
    u2.set_name("Name2");
    entities::Project p1;
    p1.set_manager(u1);
    entities::Task t1;
    t1.set_deadline("14.05.2022");
    t1.set_assignee(u2);
    p1.add_tasks(t1);
    u1.set_title("SENIOR");
    users.push_back(u1);
    users.push_back(u2);
    projects.push_back(p1);
    core::FileController* toControl;
    for(const auto& u : users) {
        toControl -> save(u);
    }

    for(const auto& p : projects) {
        toControl -> save(p1);
    } 

    return 0;
}