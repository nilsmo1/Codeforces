#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int lucky(int n) {
    while (n) {
        if (n%10!=7 && n%10!=4) {
            return 0;
        }
        n/= 10;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    if (n<4) { cout << "NO" << endline; return 0; }
    int i = 4;
    while (i<=n) {
        if (!(n%i) && lucky(i)) { cout << "YES" << endline; return 0; }
        i++;
    }
    cout << "NO" << endline;
    return 0;
}
