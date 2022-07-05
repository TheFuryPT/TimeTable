#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Module {
    private:
        int id;
        string name;
    public:
        Module() {}

        Module(int id, string name){
            this->setId(id);
            this->setName(name);
        }

        void setId(int id) {
            this->id = id;
        }
        void setName(string name) {
            this->name = name;
        }

        int getId(){
            return this->id;
        }
        string getName(){
            return this->name;
        }
};