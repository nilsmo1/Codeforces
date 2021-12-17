#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';
// Not a correct solution, some overflow issues or something
ll power(ll x, ll n) {
    if      (n == 0) { return (ll) 1; }
    else if (n == 1) { return x; }
    else if (n%2==0) { return power(x*x, n/2); }
    else if (n%2!=0) { return x * power(x*x, (n-1)/2); }
}

int main() {
    ll a,b;
    cin >> a >> b;
    ll diff = power(a,b)-power(b,a);
    cout << diff << endline;
    return 0;
}
