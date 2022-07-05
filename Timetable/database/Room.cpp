#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Room {
    private:
        int id;
        int number;
    public:
        Room () {}

        Room(int id, int number) {
            this->setId(id);
            this->setnumber(number);
        }


        void setId(int id) {
            this->id = id;
        }
        void setnumber(int number) {
            this->number = number;
        }

        int getId() {
            return this->id;
        }
        int getnumber() {
            return this->number;
        }
};