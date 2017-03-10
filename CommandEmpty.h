#ifndef COMMANDEMPTY_H
#define COMMANDEMPTY_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandEmpty : public Command {
public:
    CommandEmpty(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif