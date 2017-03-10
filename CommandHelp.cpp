#include "CommandHelp.h"

#include <iostream>
#include <iomanip>
using namespace std;

CommandHelp::CommandHelp() : Command(vector<string>()) {

}

void CommandHelp::execute(map<string, Scope>& scopes) {
    int width = 30;

    cout << "Available commands:" << endl;
    cout << setw(width) << left << "  average <scope>" << right << "get the average of all integral values (int, float) within a scope" << endl;
    cout << setw(width) << left << "  count <scope>" << right << "get the number of keys within a given scope" << endl;
    cout << setw(width) << left << "  create <scope>" << right << "create a new scope for keys" << endl;
    cout << setw(width) << left << "  delete <scope> <key>" << right << "remove a key" << endl;
    cout << setw(width) << left << "  empty <scope>" << right << "remove all keys and their values from a given scope" << endl;
    cout << setw(width) << left << "  exit" << right << "exit the database program" << endl;
    cout << setw(width) << left << "  find <scope> <value>" << right << "find all keys with a given value" << endl;
    cout << setw(width) << left << "  get <scope> <key>" << right << "get the value of a given key" << endl;
    cout << setw(width) << left << "  help" << right << "print this help message" << endl;
    cout << setw(width) << left << "  list <scope>" << right << "list all the keys and their values in the given scope" << endl;
    cout << setw(width) << left << "  max <scope>" << right << "get the minimum value of all integral values (int, float) within a scope" << endl;
    cout << setw(width) << left << "  min <scope>" << right << "get the maximum value of all integral values (int, float) within a scope" << endl;
    cout << setw(width) << left << "  scopes" << right << "list the scopes within the database" << endl;
    cout << setw(width) << left << "  set <scope> <key> <value>" << right << "set the value of a given key, if the key already exists, its value is overwritten" << endl;
    cout << setw(width) << left << "  sum <scope>" << right << "sum all integral values (int, float) within a scope" << endl;
}
