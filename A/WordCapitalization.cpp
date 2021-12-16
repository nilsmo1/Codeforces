#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endline;
    return 0;
}
