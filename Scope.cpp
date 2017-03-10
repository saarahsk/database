
#include "Scope.h"

#include <cstdlib>
#include <climits>

Scope::Scope() {

}

Scope::Scope(string name) {
    this->name = name;
}

string Scope::get(string key) {
    // search all keys for the key we are looking for
    for (map<string, string>::iterator itr = database.begin(); itr != database.end(); itr++) {
        if (key == itr->first) {
            return itr->second;
        }
    }

    throw runtime_error("key not found");
}

void Scope::set(string key, string value) {
    database[key] = value;
}

set<string> Scope::find(string value) {
    // we have a function called set so we use :: to say we want the data structure
    ::set<string> result;

    // search all values for the one we are looking for and add their keys to the set
    for (map<string, string>::iterator itr = database.begin(); itr != database.end(); itr++) {
        if (value == itr->second) {
            result.insert(itr->first);
        }
    }

    return result;
}

void Scope::deleteKey(string key) {
    database.erase(key);
}

map<string, string> Scope::list() {
    return database;
}

void Scope::empty() {
    database.clear();
}

float Scope::sum() {
    float sum = 0;

    // try to convert all values to floats and add them to the sum
    for (map<string, string>::iterator itr = database.begin(); itr != database.end(); itr++) {
        sum += atof(itr->second.c_str());
    }

    return sum;
}

int Scope::count() {
    return database.size();
}

float Scope::min() {
    float min = INT_MAX;

    // look at all keys and find the minimum
    for (map<string, string>::iterator itr = database.begin(); itr != database.end(); itr++) {
        float value = atof(itr->second.c_str());
        if (value < min) {
            min = value;
        }
    }

    return min;
}

float Scope::max() {
    float max = INT_MIN;

    // look at all keys and find the maximum
    for (map<string, string>::iterator itr = database.begin(); itr != database.end(); itr++) {
        float value = atof(itr->second.c_str());
        if (value > max) {
            max = value;
        }
    }

    return max;
}
