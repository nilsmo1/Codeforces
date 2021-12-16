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
    int total = 0;
    for (int i=0; i<n; i++) {
        int count = 0;
        for (int j=0; j<3; j++) {
            count += arr[i][j];
            if (count == 2) { total+=1; break; }
        }
    }
    cout << total << endline;
    return 0;
}
