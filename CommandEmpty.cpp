#include "CommandEmpty.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandEmpty::CommandEmpty(vector<string> arguments) : Command(arguments) {

}

void CommandEmpty::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 2) {
        throw runtime_error("usage: empty <scope>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    scopes[scope].empty();
}
