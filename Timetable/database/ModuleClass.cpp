#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class ModuleClass {
    private:
        int id_module;
        int id_class;
        time_t datetime;
    public:
        ModuleClass(int id_module, int classId){
            this->setId_module(id_module);
            this->setId_class(classId);
        }

        void setId_module(int id_module) {
            this->id_module = id_module;
        }
        void setId_class(int id_class) {
            this->id_class = id_class;
        }
        void setDatetime(time_t datetime) {
            this->id_class = datetime;
        }

        int getId_module(){
            return this->id_module;
        }
        int getId_class(){
            return this->id_class;
        }
        time_t getDatetime(){
            return this->datetime;
        }
};