#include "CommandExit.h"

#include <cstdlib>
#include <fstream>
#include <vector>

CommandExit::CommandExit() : Command(vector<string>()) {

}

void CommandExit::execute(map<string, Scope>& scopes) {
    ofstream out;
    out.open("data.db");
    
    for (map<string, Scope>::iterator scope_itr = scopes.begin(); scope_itr != scopes.end(); scope_itr++) {
        out << "scope " << scope_itr->first << endl;
        
        map<string, string> elements = scope_itr->second.list();
        for (map<string, string>::iterator itr = elements.begin(); itr != elements.end(); itr++) {
            out << itr->first << " " << itr->second << endl;
        }
    }
    
    out.close();
    exit(0);
}
