#include <string>
#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s1,s2;
    string ans = "";
    cin >> s1 >> s2;
    for (int i=0; i<s1.size(); i++) {
        if (s1[i] == s2[i]) { ans+='0'; }
        else { ans+='1'; }
    }
    cout << ans << endline;
    return 0;
}
