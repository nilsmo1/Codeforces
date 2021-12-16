#include <iostream>
#include <cmath>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int arr[5][5];
    int idi, idj;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) { idi = i+1; idj = j+1; }
        }
    }
    cout << abs(idi-3) + abs(idj-3) << endline;
    return 0;
}
