#include <iostream>
#include <fstream>
#include <sqlite3.h> 
#include <vector>

#include "DatabaseCheck.cpp"

using namespace std;

sqlite3 *db;
char* messaggeError;
int op;

class DatabaseConnection {
    private: 
        string getDataStructure(vector<string> structure) {

            string result;

            for (int i = 0; i < structure.size(); i++) {
                result.append(structure[i]);
                if (i != structure.size()) {
                    result.append(",");
                } 
            }

            return result;
        }

    public:
        int connect (const char *path){
            if (databaseCheck("database.db"))
            {
                op = sqlite3_open(path, &db);
                return op;
            }
            else{
                cout << "Error opening Database" << endl;
                return NULL;
            }
        }

        void disconnect (const char *path){
            if (databaseCheck("database.db"))
            {
                sqlite3_close(db);
            }
            else{
                cout << "Error closing Database" << endl;
            }
        }
        
        int insert (string tableName, vector<string> columnsVector, vector<string> valuesVector) {

            string sql = "INSERT INTO " +
                tableName + "class (" +
                this->getDataStructure(columnsVector) + ") VALUES (" + 
                this->getDataStructure(valuesVector) + ")";
           
            op = sqlite3_exec(db, sql.c_str(), NULL, 0, &messaggeError);
            if (exit != SQLITE_OK) {
                cerr << "Error Insert" << endl;
                sqlite3_free(messaggeError);
            }
            else
                cout << "Records created Successfully!" << endl;
                return sqlite3_last_insert_rowid(db);
        }
};