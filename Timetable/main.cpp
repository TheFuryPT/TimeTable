#include <iostream>
#include <string>
#include <fstream>

#include "resources\Menu.cpp"
#include "database\DatabaseConnection.cpp"
#include "database\Model.cpp"
#include "resources\DataDTO.cpp"

using namespace std;
  
DatabaseConnection conn;
Menu menu;
DataDTO dataDTO;
Model model;

void initConsole();
void redirectMainAction();

int main()
{
    initConsole();
    conn.connect("database.db");

    menu.appendMainMenu();
    int menuOption;
    cin >> menuOption;
    menu.setMainOption(menuOption);

    if (databaseCheck("database.db")) {
        redirectMainAction();
    }
    else {
        cout << "Couldnt open database" << endl;
    }

}

void initConsole() {
    
    system ("title Student Database");
    system ("cls");
    system ("color OF");
}

void redirectMainAction() {
    menu.validateMainMenuOption();
    switch (menu.getMainOption()) {
        case 1:
            model.insert(menu.readStudent());
            break;

        case 2:
            menu.search();
            main();
            break;

        case 3:
            menu.quitMainMenu();
            break;

        cin.get();
        main();
    }
}