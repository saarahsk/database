#include "CommandSet.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandSet::CommandSet(vector<string> arguments) : Command(arguments) {

}

void CommandSet::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 4) {
        throw runtime_error("usage: set <scope> <key> <value>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    string key = arguments[2];
    string value = arguments[3];
    
    if (key == "scope") {
        throw runtime_error("scope is a reserved value, you cannot use it as a key");
    }
    
    scopes[scope].set(key, value);
}
