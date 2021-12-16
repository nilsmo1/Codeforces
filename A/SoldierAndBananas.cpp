#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll k,n,w;
    cin >> k >> n >> w;
    ll cost = w*(k+k*w)/2;
    ll res = cost > n ? cost-n : 0;
    cout << res << endline;
    return 0;
}
