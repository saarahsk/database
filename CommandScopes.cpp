#include "CommandScopes.h"

#include <cstdlib>
#include <iostream>
#include <vector>

CommandScopes::CommandScopes() : Command(vector<string>()) {

}

void CommandScopes::execute(map<string, Scope>& scopes) {
    for (map<string, Scope>::iterator itr = scopes.begin(); itr != scopes.end(); itr++) {
        cout << itr->first << endl;
    }
}
