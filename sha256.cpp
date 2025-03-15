#include <iostream>
#include <string>
using namespace std;

string SHA256(const string& input) {
    string hash = input.substr(0, 10);
    return hash;
}