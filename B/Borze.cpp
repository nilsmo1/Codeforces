#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string S, E="";
    ll c=0;
    cin >> S;
    while (c < S.size()) {
        if (S[c] == '.') { E+='0'; }
        else if (c != S.size()-1) {
            if      (S[c] == '-' && S[c+1] == '.') { E+='1'; c++; }
            else if (S[c] == '-' && S[c+1] == '-') { E+='2'; c++; }
        }
        c++;
    }
    cout << E << endline;
    return 0;
}
