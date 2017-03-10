#include "CommandGet.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandGet::CommandGet(vector<string> arguments) : Command(arguments) {

}

void CommandGet::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 3) {
        throw runtime_error("usage: get <scope> <key>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    string key = arguments[2];
    string value = scopes[scope].get(key);

    cout << value << endl;
}
