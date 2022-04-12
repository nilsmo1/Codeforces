#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

ll f(ll N) {
    if (N%2) { return -(N+1)/2; }
    return N/2;
}

int main() {
    ll N;
    cin >> N;
    cout << f(N) << endline;
    return 0;
}
