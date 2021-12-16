#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll w;
    cin >> w;
    if (w<4) { cout << "NO" << endline; }
    else {cout << (!(w%2) ? "YES" : "NO") << endline; }
    return 0;
}
