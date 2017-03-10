#ifndef COMMANDFIND_H
#define COMMANDFIND_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandFind : public Command {
public:
    CommandFind(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif