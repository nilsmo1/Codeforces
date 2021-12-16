#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    double n;
    cin >> n;
    double total = 0;
    for (int i=0; i<n; i++) {
        double p;
        cin >> p;
        total += p/100;
    }
    cout << 100*total/n << endline;
    return 0;
}
