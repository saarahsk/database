#ifndef COMMANDLIST_H
#define COMMANDLIST_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandList : public Command {
public:
    CommandList(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif