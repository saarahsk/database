#ifndef COMMANDHELP_H
#define COMMANDHELP_H

#include "Command.h"
#include "Scope.h"

class CommandHelp : public Command {
public:
    CommandHelp();
    virtual void execute(map<string, Scope>& scopes);
};

#endif

