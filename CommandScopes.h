#ifndef COMMANDSCOPES_H
#define COMMANDSCOPES_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandScopes : public Command {
public:
    CommandScopes();
    virtual void execute(map<string, Scope>& scopes);
};

#endif