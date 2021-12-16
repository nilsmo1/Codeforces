#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll n;
    cin >> n;
    ll diff = 0;
    for (ll i=0; i<n; i++) {
        char c;
        cin >> c;
        if (c=='A') { diff++; }
        else { diff--; }
    }
    if (diff==0) { cout << "Friendship" << endline; }
    else if (diff > 0) { cout << "Anton" << endline; }
    else { cout << "Danik" << endline; }
    return 0;
}
