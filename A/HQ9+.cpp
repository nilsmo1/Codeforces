#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s;
    cin >> s;
    for (char c : s) {
        if (c=='H' || c=='Q' || c=='9') { cout << "YES" << endline; return 0; }
    }
    cout << "NO" << endline;
    return 0;
}
