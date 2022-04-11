#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int N,H,E,W;
    cin >> N >> H;
    W=N;
    for (int i=0; i<N; i++) {
        cin >> E;
        if (E>H) { W++; }
    }
    cout << W << endline;
    return 0;
}
