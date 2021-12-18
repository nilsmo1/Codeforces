#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll n; 
    cin >> n;
    map<string, int> ss;
    for (ll i=0; i<n; i++) { 
        string s;
        cin >> s;
        if (ss.find(s) == ss.end()) {
            ss.insert(pair<string, int>(s, 1));
            cout << "OK" << endline;
        } else {
            cout << s+to_string(ss[s]) << endline;
            ss[s]++;
        } 
    }
    return 0;
}
