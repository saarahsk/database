#ifndef COMMANDEXIT_H
#define COMMANDEXIT_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandExit : public Command {
public:
    CommandExit();
    virtual void execute(map<string, Scope>& scopes);
};

#endif

