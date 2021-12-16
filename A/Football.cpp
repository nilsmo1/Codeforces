#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s;
    cin >> s;
    for (int i=0; i<s.length()-1; i++) {
        int count = 1;
        for (int j=i+1; j<s.length(); j++) {
            if (s[i] != s[j]) { break; }
            count++;
            if (count == 7) { cout << "YES" << endline; return 0; }
        }
    }
    cout << "NO" << endline;
    return 0;
}
