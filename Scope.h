#ifndef SCOPE_H
#define SCOPE_H

#include <set>
#include <map>
#include <string>
using namespace std;

class Scope {
public:
    Scope(); // map requires a default constructor when using the [] operator
    Scope(string name);

    string get(string key);
    void set(string key, string value);
    ::set<string> find(string value);
    void deleteKey(string key);
    map<string, string> list();
    void empty();
    float sum();
    int count();
    float min();
    float max();

private:
    string name;
    map<string, string> database;
};

#endif

