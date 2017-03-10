#include "Command.h"
#include "CommandParser.h"
#include "Scope.h"

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    cout << "Welcome to SaarahDB. Type 'help' for more information." << endl;

    // load the database -- the file format is key and value
    // scope is a special word in the database format
    map<string, Scope> scopes;
    ifstream in;
    in.open("data.db");
    
    string key;
    string value;
    
    string scope;
    while (in >> key >> value) { // get two words at a time (line by line) from the file
        if (key == "scope") {
            scopes[value] = Scope(value);
            scope = value;
            continue;
        }
        
        scopes[scope].set(key, value);
    }
    
    in.close();
    
    while (true) {
        cout << "> ";

        string line;
        getline(cin, line);

        // parse is a static function so we don't need an instance of CommandParser
        Command* command = CommandParser::parse(line);
        if (command == nullptr) {
            cout << "Please enter a valid command. Type 'help' for a list of commands." << endl;
            continue;
        }
        
        try {
            // execute throws an exception if there is an error in execution
            command->execute(scopes);
        }
        catch (runtime_error e) {
            cout << "Error: " << e.what() << endl;
        }
        
        delete command;
    }

    return 0;
}
