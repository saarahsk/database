#ifndef COMMANDSUM_H
#define COMMANDSUM_H

#include "Scope.h"
#include "Command.h"

#include <map>
#include <string>
using namespace std;

class CommandSum : public Command {
public:
    CommandSum(vector<string> arguments);
    virtual void execute(map<string, Scope>& scopes);
};

#endif