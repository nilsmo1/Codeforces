#include <iostream>
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll x;
    cin >> x;
    ll count = -1;
    if      (!(x%5)) { count = x/5; }
    else if (!(x%4)) { count = x/4; }
    else if (!(x%4)) { count = x/3; }
    cout << (count!=-1 ? min(count, x/5+1) : x/5+1) << endline;
    return 0;
}
