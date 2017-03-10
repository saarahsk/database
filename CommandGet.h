#ifndef COMMANDGET_H
#define COMMANDGET_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandGet : public Command {
public:
    CommandGet(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif