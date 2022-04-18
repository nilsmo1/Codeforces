#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

void o(ll n) {
    ll total=0,curr;
    if (n<10) { cout << n << endline; return; }
    for (int i=1; i<10; i++) {
        curr = i;
        while (curr<=n) {
            total++;
            curr*=10; curr+=i;
        }
    }
    cout << total << endline;

}

int main() {
    ll N, C;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> C;
        o(C);
    }
    return 0;
}
