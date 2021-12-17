#include <iostream>
#include <string>
#include <set>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s;
    cin >> s;
    set<char> cs;
    for (char c : s) { cs.insert(c); }
    cout << (cs.size()%2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endline;
    return 0;
}
