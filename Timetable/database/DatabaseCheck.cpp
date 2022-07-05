#include <iostream>
#include <string>
#include <fstream>
#include <sqlite3.h>

using namespace std;

//https://videlais.com/2018/12/13/c-with-sqlite3-part-3-inserting-and-selecting-data/

sqlite3 *db;

bool databaseCheck(const char *path)
{
    int rc = sqlite3_open(path, &db);

    if( rc ){
            // Show an error message
            cout << "DB Error: " << sqlite3_errmsg(db) << endl;
            // Close the connection
            sqlite3_close(db);
            // Return an error
            return false;
        }
    else{
        sqlite3_close(db);
        return true ;}
}