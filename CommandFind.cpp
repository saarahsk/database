#include "CommandFind.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandFind::CommandFind(vector<string> arguments) : Command(arguments) {

}

void CommandFind::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 3) {
        throw runtime_error("usage: find <scope> <value>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    string value = arguments[2];
    set<string> keys = scopes[scope].find(value);

    for (set<string>::iterator itr = keys.begin(); itr != keys.end(); itr++) {
        cout << *itr << endl;
    }
}
