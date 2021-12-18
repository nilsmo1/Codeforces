#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i=0; i<n; i++) {
        int a,b;
        cin >> a >> b;
        total += (b-a>1)*1;
    }
    cout << total << endline;
    return 0;
}
