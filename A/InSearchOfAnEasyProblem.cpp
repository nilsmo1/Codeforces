#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int N;
    char c;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> c;
        if (c == '1') { cout << "HARD" << endline; return 0; }
    }
    cout << "EASY" << endline;
    return 0;
}
