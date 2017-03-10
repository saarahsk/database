#include "CommandCreate.h"

#include <cstdlib>
#include <vector>

CommandCreate::CommandCreate(vector<string> arguments) : Command(arguments) {

}

void CommandCreate::execute(map<string, Scope>& scopes) {
    if (arguments.size() != 2) {
        throw runtime_error("usage: create <scope>");
    }

    string name = arguments[1];
    scopes[name] = Scope(name);
}
