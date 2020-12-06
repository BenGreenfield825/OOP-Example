//
// Created by Ben on 11/11/2020.
//

#ifndef COURSESOOP_MENU_H
#define COURSESOOP_MENU_H

#include "Course.h"

class Menu {
private:

public:
    Menu();
void options();
};

Menu::Menu() {
    cout << "Welcome to Course creator!" << endl;
    cout << "Type one of the numbers from the options below and hit enter to continue." << endl;
    options();
}
void Menu::options() {
    cout << "1. View courses" << endl;
    cout << "2. Create a new course" << endl;
    cout << "3. Delete a course" << endl;
}




#endif //COURSESOOP_MENU_H
//menu system that asks user what they want to do