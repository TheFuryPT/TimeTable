#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Class {
    private:
        int id;
        int number;
    public:
        Class () {}

        Class(int id, int number){
            this->setId(id);
            this->setNumber(number);
        }


        void setId(int id) {
            this->id = id;
        }
        void setNumber(int number) {
            this->number = number;
        }

        int getId(){
            return this->id;
        }
        int getnumber(){
            return this->number;
        }
        


};