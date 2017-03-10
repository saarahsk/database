#include "CommandList.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandList::CommandList(vector<string> arguments) : Command(arguments) {

}

void CommandList::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 2) {
        throw runtime_error("usage: list <scope>");
    }

    string scope = arguments[1];
    if (scopes.count(scope) == 0) {
        throw runtime_error("scope doesn't exist");
    }

    map<string, string> elements = scopes[scope].list();
    for (map<string, string>::iterator itr = elements.begin(); itr != elements.end(); itr++) {
        cout << itr->first << ": " << itr->second << endl;
    }
}
