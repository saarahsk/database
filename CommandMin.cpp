#include "CommandMin.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandMin::CommandMin(vector<string> arguments) : Command(arguments) {

}

void CommandMin::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 2) {
        throw runtime_error("usage: min <scope>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    float min = scopes[scope].min();
    cout << min << endl;
}
