#ifndef COMMANDMAX_H
#define COMMANDMAX_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandMax : public Command {
public:
    CommandMax(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif