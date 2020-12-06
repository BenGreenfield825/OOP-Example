//
// Created by Ben on 11/11/2020.
//

#ifndef COURSESOOP_COURSE_H
#define COURSESOOP_COURSE_H

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//template <typename T>
class Course {
private:
    string courseType;
    string courseMeetTime;
    double credits;
    string courseName;
    string description;
public:
    Course(string courseType, string courseName, double credits, string courseMeetTime, string description);
    void printCourseInfo();
};

Course::Course(string courseType, string courseName, double credits, string courseMeetTime, string description) {
    this->courseType = courseType;
    this->courseName = courseName;
    this->credits = credits;
    this->courseMeetTime = courseMeetTime;
    this->description = description;
}

void Course::printCourseInfo() {
    cout << courseType << ", " << courseName << ", " << credits << ", " << courseMeetTime << ", " << description << endl;
}


#endif //COURSESOOP_COURSE_H

//template style class that allows type to come from CourseType
//handle info like time, credits, description, etc