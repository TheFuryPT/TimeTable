#include <iostream>
#include <string>
#include <fstream>
#include <sqlite3.h>
#include "..\database\DatabaseConnection.cpp"
#include "..\resources\DataDTO.cpp"

using namespace std;
const int MAX_MENU_OPTION = 3;

class Menu {

    private:
        int mainMenuOption;

        void appendMainMenuErrorMessage(bool hasError = false) {
            system("CLS");
            cout << "Please select a valid option.\n" << endl;
        }
        
    public:      
        void setMainOption(int option) {
            this->mainMenuOption = (option <= MAX_MENU_OPTION) ? option : 0;
        }

        void quitMainMenu() {
            exit(0);
        }

        int getMainOption() {
            return this->mainMenuOption;
        }

        void appendMainMenu(bool hasError = false) {
            if (!hasError) {
                system("CLS");
            }
            cout << "1. Input student" << endl;
            cout << "2. Search" << endl;
            cout << "3. Exit" << endl;
        }   

        bool validateMainMenuOption() {
            if (this->mainMenuOption == 0) {
                appendMainMenuErrorMessage();
                appendMainMenu(true);
                return true;
            }
            else{
                return false;}
        }

        DataDTO readStudent() {
            string studentName;
            string studentModule;
            int studentRoom;
            int studentClass;
            string studentLecture;

            cout << "Enter student's name." << endl;
            cin >> studentName;

            cout << "Enter student's module." << endl;
            cin >> studentModule;

            cout << "Enter student's room." << endl;
            cin >> studentRoom;

            cout << "Enter student class." << endl;
            cin >> studentClass;

            cout << "Enter student Lecture for the module" + (studentModule) + "." << endl;
            cin >> studentLecture;

            DataDTO dataDTO(studentName, studentModule, studentRoom, studentClass, studentLecture);

            return dataDTO;
        }
        
        void search() {
            int choice2;
            system ("CLS");

            cout << "1. Search by name" << endl; 
            cout << "2. Search by module" << endl; 
            cout << "3. Search by room" << endl; 
            cout << "4. Search by all" << endl; 
            cout << "6. Back" << endl; 
            cin >> choice2;

            switch (choice2)
            {
            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;
            
            case 6:
                appendMainMenu();
                break;
            }
        }
};