#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    ll hurt=0;
    for (ll i=1; i<=d; i++) {
        for (ll c : {k,l,m,n}) {
            if (i%c==0) { hurt++; break; }
        } 
    }
    cout << hurt << endline;
    return 0;
}
