#include "CommandMax.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandMax::CommandMax(vector<string> arguments) : Command(arguments) {

}

void CommandMax::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 2) {
        throw runtime_error("usage: max <scope>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    float max = scopes[scope].max();
    cout << max << endl;
}
