#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int cutoff = arr[k-1];
    int total = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] < cutoff or arr[i] < 1) { break; }
        total += 1;
    }
    cout << total << endline;
    return 0;
}
