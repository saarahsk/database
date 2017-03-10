#ifndef COMMANDMIN_H
#define COMMANDMIN_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandMin : public Command {
public:
    CommandMin(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif