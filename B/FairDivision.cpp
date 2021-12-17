#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        int count = 0;
        int twos = 0;
        int ones = 0;
        for (int j=0; j<num; j++) {
            int d;
            cin >> d;
            if (d == 2) { twos++; }
            else { ones++; }
        }
        int sum = 2*twos+ones;
        if (!(ones)) { arr[i] = (!(twos%2) && twos > 0); }
        else if (!(twos)) { arr[i] = !(ones%2); }
        else { arr[i] = !(sum%2); }
    }
    for (int i : arr) {
        cout << (i ? "YES" : "NO") << endline;
    }
    return 0;
}
