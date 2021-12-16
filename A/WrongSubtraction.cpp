#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll n,k;
    cin >> n >> k;
    while (k--) {
        if (!(n%10)) { n/=10; }
        else { n--; }
    }
    cout << n << endline;
    return 0;
}
