#include <iostream>
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll P, M, C, K, R, V;
    cin >> P >> M >> C >> K >> R >> V;
    ll count = min({P/K, M/R, C/V});
    cout << count << endline;
    return 0;
}
