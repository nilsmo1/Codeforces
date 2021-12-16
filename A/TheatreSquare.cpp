#include <iostream>
#include <cmath>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll n,m;
    double a;
    cin >> n >> m >> a;
    ll output = ceil(n/a) * ceil(m/a);
    cout << output << endline;
    return 0;
}
