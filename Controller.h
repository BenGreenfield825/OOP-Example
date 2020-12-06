//
// Created by Ben on 11/11/2020.
//

#ifndef COURSESOOP_CONTROLLER_H
#define COURSESOOP_CONTROLLER_H

#include "Course.h"
#include <vector>

class Controller {
private:
    vector<Course*> courses;
public:
    Controller();
    void options();
    void viewCourses();
    void createCourse();
    void deleteCourse();
};

Controller::Controller() {
    cout << "Welcome to Course creator!" << endl;
    cout << "Type one of the numbers from the options below and hit enter to continue." << endl;
    options();
}
void Controller::options() {
    cout << "| 1. View courses" << endl;
    cout << "| 2. Create a new course" << endl;
    cout << "| 3. Delete a course" << endl;
}
void Controller::viewCourses() {
    for(int i=0; i<courses.size();i++) {
        courses[i]->printCourseInfo();
    }
}




#endif //COURSESOOP_CONTROLLER_H
//menu system that asks user what they want to do