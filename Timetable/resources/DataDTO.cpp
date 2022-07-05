#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class DataDTO {
    private:
        string studentName;
        string studentModule;
        int studentRoom;
        int studentClass;
        string studentLecture;

    public:
        DataDTO(
            string studentName,
            string studentModule,
            int studentRoom,
            int studentClass,
            string studentLecture
        ) {
            this->studentName = studentName;
            this->studentModule = studentModule;
            this->studentRoom = studentRoom;
            this->studentClass = studentClass;
            this->studentLecture = studentLecture;
        }

        string getStudentName(){
            return this->studentName;
        }
        string getStudentModule(){
            return this->studentModule;
        }
        int getStudentRoom(){
            return this->studentRoom;
        }
        int getStudentClass(){
            return this->studentClass;
        }
        string getStudentLecture(){
            return this->studentLecture;
        }
};