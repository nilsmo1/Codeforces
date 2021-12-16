#include <iostream>
#include <string>
#include <cctype>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s;
    cin >> s;
    int diff = 0;
    for (char c : s) {
        if (isupper(c)) { diff++; }  
        else { diff--; }
    }
    for (char c : s) {
        if (diff > 0) { cout << (char) toupper(c); }
        else { cout << (char) tolower(c); }
    }
    cout << endline;
    return 0;
}
