#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll n;
    cin >> n;
    ll luckies = 0;
    while (n) {
        if (n%10==7 || n%10==4) {
            luckies++;
        }
        n/=10;
    }
    if (!(luckies)) { cout << "NO" << endline; return 0; }
    while (luckies) {
        if (luckies%10!=7 && luckies%10!=4) {
            cout << "NO" << endline;
            return 0;
        }
        luckies/=10;
    }
    cout << "YES" << endline;
    return 0;
}
