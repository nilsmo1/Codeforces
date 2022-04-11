#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int N, past, current, groups=0;
    cin >> N;
    cin >> past;
    for (int i=0; i<N-1; i++) {
        cin >> current;
        if (current != past) { groups++; }
        past = current;
    }
    cout << groups << endline;

    return 0;
}
