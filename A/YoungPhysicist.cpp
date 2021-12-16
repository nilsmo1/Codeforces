#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int n;
    cin >> n;
    int arr[n][3];
    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<3; i++) {
        int count = 0;
        for (int j=0; j<n; j++) {
            count += arr[j][i];
        }
        if (count != 0) {cout << "NO" << endline; return 0;}
    }
    cout << "YES" << endline;
    return 0;
}
