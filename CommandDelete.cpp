#include "CommandDelete.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandDelete::CommandDelete(vector<string> arguments) : Command(arguments) {

}

void CommandDelete::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 3) {
        throw runtime_error("usage: delete <scope> <key>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    string key = arguments[2];
    scopes[scope].deleteKey(key);
}
