#ifndef COMMAND_H
#define COMMAND_H

#include "Scope.h"

#include <vector>
#include <string>
using namespace std;

// the base command that all commands within the database must implement
class Command {
public:
    Command(vector<string> args);
    virtual ~Command();

    // virtual ... = 0 means it's a pure virtual function: you can't make a Command
    // you have to inherit from it and give an implementation of execute
    
    // takes in a map of all scopes within the database and allows the executor to do whatever with it
    // it is a reference variable because we might be adding scopes and that needs to be reflected
    virtual void execute(map<string, Scope>& scopes) = 0;

protected:
    vector<string> arguments;
};

#endif

