#include "CommandCount.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandCount::CommandCount(vector<string> arguments) : Command(arguments) {

}

void CommandCount::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 2) {
        throw runtime_error("usage: count <scope>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    int count = scopes[scope].count();
    cout << count << endl;
}
