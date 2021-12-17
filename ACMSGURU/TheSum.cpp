#include <iostream>
#include <vector>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll k;
    cin >> k;
    if (k == 1) { cout << 1 << endline; return 0; }
    vector<ll> vec{1,1};
    ll sum = 2;
    for (int i=2; i<k; i++) {
        ll d = vec[i-1]+vec[i-2];
        vec.push_back(d);
        sum+=d;
    }
    cout << sum << endline;
    return 0;
}
