#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s,t;
    cin >> s >> t;
    int len = s.length();
    for (int i=0; i<len; i++) {
        if (s[i] != t[len-i-1]) { cout << "NO" << endline; return 0; }
    }
    cout << "YES" << endline;
    return 0;
}
