#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Lecturer {
    private:
        int id;
        int classId;
        string module;
    public:
        Lecturer () {}

        Lecturer(int id, int classId, string name){
            this->setId(id);
            this->setClassId(classId);
            this->setModule(module);  
        }


        void setId(int id) {
            this->id = id;
        }
        void setClassId(int classId) {
            this->classId = classId;
        }
        void setModule(string module) {
            this->module = module;
        }

        int getId(){
            return this->id;
        }
        int getClassId(){
            return this->classId;
        }
        string getmodule(){
            return this->module;
        }
        


};