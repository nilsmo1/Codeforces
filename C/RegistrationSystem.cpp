#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
using ll = int64_t;
#define endline '\n';
// Time limit exceeded 
int in(string s, set<string> ss) {
    return (ss.find(s) != ss.end());
}

int main() {
    ll n; 
    cin >> n;
    set<string> ss;
    vector<string> rs;
    for (ll i=0; i<n; i++) { 
        string s;
        cin >> s;
        if (!(in(s,ss))) { ss.insert(s); rs.push_back("OK"); }
        else {
            ll i = 1;
            while (1) {
                if (!(in(s+to_string(i),ss))) { ss.insert(s+to_string(i)); rs.push_back(s+to_string(i)); break; }
                i++;
            }
        }
    }
    for (string S : rs) { cout << S << endline; }
    return 0;
}
