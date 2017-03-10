#ifndef COMMANDCREATE_H
#define COMMANDCREATE_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandCreate : public Command {
public:
    CommandCreate(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif