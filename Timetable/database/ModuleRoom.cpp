#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class ModuleRoom {
    private:
        int id_module;
        int id_room;
    public:
        ModuleRoom(int id_module, int id_room){
            this->setId_module(id_module);
            this->setId_room(id_room);
        }


        void setId_module(int id_module) {
            this->id_module = id_module;
        }
        void setId_room(int id_room) {
            this->id_room = id_room;
        }


        int getId_module(){
            return this->id_module;
        }
        int getId_room(){
            return this->id_room;
        }
};