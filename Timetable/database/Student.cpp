#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Student {
    private:
        int id;
        int classId;
        string name;
    public:
        Student() {}

        Student(int id, int classId, string name){
            this->setId(id);
            this->setClassId(classId);
            this->setName(name);
        }

        void setId(int id) {
            this->id = id;
        }
        void setClassId(int classId) {
            this->classId = classId;
        }
        void setName(string name) {
            this->name = name;
        }

        int getId(){
            return this->id;
        }
        int getClassId(){
            return this->classId;
        }
        string getName(){
            return this->name;
        }
};