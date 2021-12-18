#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        int e;
        cin >> e;
        arr[e-1] = i+1;
    }
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endline;
    return 0;
}
