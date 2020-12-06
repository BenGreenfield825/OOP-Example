//
// Created by Ben on 11/11/2020.
//

#ifndef COURSESOOP_CONTROLLER_H
#define COURSESOOP_CONTROLLER_H
#include <bits/stdc++.h>
#include "Course.h"
#include <vector>
#include <string>

class Controller {
private:
    vector<Course*> courses;    //could also use an unordered list data structure, but this is easier in this case
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
    int choice;
    while(choice!=4) {
        cout << "| 1. View courses" << endl;
        cout << "| 2. Create a new course" << endl;
        cout << "| 3. Delete a course" << endl;
        cout << "| 4. Quit" << endl;    //TODO program does not quit when 4 is selected after using an option
        cin >> choice;
        switch(choice) {
            case 1:
                viewCourses();
                break;
            case 2:
                createCourse();
                break;
            case 3:
                deleteCourse();
                break;
            default:
                if(choice==4) {
                    cout << "Thank you for using my program!" << endl;
                    break;
                }
                cout << "Invalid choice, please choose again." << endl;
                break;
        }
    }
}
void Controller::viewCourses() {
    if(courses.empty()) {
        cout << "No courses to show." << endl;
    }
    else {
        for(int i=0; i<courses.size();i++) {
            cout << "| ";
            courses[i]->printCourseInfo();
        }
        cout << endl;
    }
}
void Controller::createCourse() {
    string courseType;
    string courseMeetTime;
    double credits;
    string courseName;
    string description;
    cout << "Course type (i.e. CSCI, MATH, etc.): ";
    cin >> courseType;
    cout << "Course name: ";
    cin >> courseName;
    cout << "Credits: ";
    cin >> credits;
    cout << "Course meeting time: ";
    cin >> courseMeetTime;
    cout << "Course description: ";
    cin >> description;
    courses.push_back(new Course(courseType,courseName,credits,courseMeetTime,description));
    cout << "Course created!" << endl;
    options();
}
void Controller::deleteCourse() {
    int choice;
    cout << "Which course would you like to delete? Select the number option next to the course listing." << endl;
    for(int i=0;i<courses.size();i++) { //TODO add quit/never mind option
        cout << "| " << i << ". ";
        courses[i]->printCourseInfo();
    }
    cout << endl;
    cin >> choice;
    courses.erase(courses.begin()+choice);
    cout << "Course deleted!" << endl;
}




#endif //COURSESOOP_CONTROLLER_H
//menu system that asks user what they want to do