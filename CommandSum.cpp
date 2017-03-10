#include "CommandSum.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandSum::CommandSum(vector<string> arguments) : Command(arguments) {

}

void CommandSum::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 2) {
        throw runtime_error("usage: sum <scope>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    float sum = scopes[scope].sum();
    cout << sum << endl;
}
