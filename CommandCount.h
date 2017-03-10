#ifndef COMMANDCOUNT_H
#define COMMANDCOUNT_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandCount : public Command {
public:
    CommandCount(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif