#ifndef COMMANDDELETE_H
#define COMMANDDELETE_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandDelete : public Command {
public:
    CommandDelete(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif