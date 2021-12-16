#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int len = s1.length();
    for (int i=0; i<len; i++) {
        if (toupper(s1[i]) != toupper(s2[i])) {
            cout << (toupper(s1[i]) > toupper(s2[i]) ? 1 : -1) << endline; return 0;
        }
    }
    cout << 0 << endline;
    return 0;
}
