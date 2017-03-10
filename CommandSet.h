#ifndef COMMANDSET_H
#define COMMANDSET_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandSet : public Command {
public:
    CommandSet(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif