#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#include "Command.h"

#include <string>
using namespace std;

class CommandParser {
public:
    static Command* parse(string input);
};

#endif

