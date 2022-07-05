#include <iostream>
#include <string>
#include <fstream>
#include <sqlite3.h>
#include "..\resources\DataDTO.cpp"
#include "Student.cpp"
#include "Class.cpp"
#include "Module.cpp"
#include "Room.cpp"
#include "Lecturer.cpp"
#include "DataBaseConnection.cpp"
#include <vector>


using namespace std;

class Model {
    private: 
        int insertClass(Class studentClass) {
            DatabaseConnection db;
            Class studentClass;

            vector<string> values;
            values.push_back(to_string(studentClass.getnumber()));

            return db.insert(studentClass.TABLE_NAME, studentClass.TABLE_COLUMNS, values);
        }

        void insertStudent(Student student) {
            //TODO query insert student
        }

    public: 
        void insert (DataDTO dataDTO) {
            Class studentClass;
            studentClass.setNumber(dataDTO.getStudentClass());
            int lastInsertedClassId = insertClass(studentClass);

            Student student;
            student.setName(dataDTO.getStudentName());
            student.setClassId(lastInsertedClassId);

            Module studentModule;
            studentModule.setName(dataDTO.getStudentModule());

            Room room;
            room.setnumber(dataDTO.getStudentRoom());         

            Lecturer lecturer;
            lecturer.setModule(dataDTO.getStudentLecture());

            //TODO gather each independent entity values and send the objects to specific methods
        }
};