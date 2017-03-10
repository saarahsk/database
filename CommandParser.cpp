#include "CommandParser.h"

#include "CommandCount.h"
#include "CommandCreate.h"
#include "CommandDelete.h"
#include "CommandEmpty.h"
#include "CommandExit.h"
#include "CommandFind.h"
#include "CommandGet.h"
#include "CommandHelp.h"
#include "CommandList.h"
#include "CommandMax.h"
#include "CommandMin.h"
#include "CommandScopes.h"
#include "CommandSet.h"
#include "CommandSum.h"

#include <iostream>
#include <vector>
using namespace std;

// break a command, regardless of spaces in between words
Command* CommandParser::parse(string input) {
    vector<string> elements;

    string word;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            word += input[i];
            continue;
        }

        // we know input[i] is a space
        if (word.empty()) {
            continue;
        }

        elements.push_back(word);
        word.clear();
    }

    if (!word.empty()) {
        elements.push_back(word);
    }

    if (elements[0] == "help") {
        return new CommandHelp;
    }
    else if (elements[0] == "create") {
        return new CommandCreate(elements);
    }
    else if (elements[0] == "scopes") {
        return new CommandScopes;
    }
    else if (elements[0] == "get") {
        return new CommandGet(elements);
    }
    else if (elements[0] == "set") {
        return new CommandSet(elements);
    }
    else if (elements[0] == "find") {
        return new CommandFind(elements);
    }
    else if (elements[0] == "delete") {
        return new CommandDelete(elements);
    }
    else if (elements[0] == "list") {
        return new CommandList(elements);
    }
    else if (elements[0] == "empty") {
        return new CommandEmpty(elements);
    }
    else if (elements[0] == "exit" || elements[0] == "quit") {
        return new CommandExit;
    }
    else if (elements[0] == "sum") {
        return new CommandSum(elements);
    }
    else if (elements[0] == "count") {
        return new CommandCount(elements);
    }
    else if (elements[0] == "min") {
        return new CommandMin(elements);
    }
    else if (elements[0] == "max") {
        return new CommandMax(elements);
    }

    return nullptr;
}

