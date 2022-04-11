#include <iostream>
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int N, M=0, a, b, pass=0;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> a >> b;
        pass-=a;
        pass+=b;
        M = max(M,pass);
    }
    cout << M << endline;
    return 0;
}
