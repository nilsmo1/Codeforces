#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int N, val=0;
    cin >> N;
    string s;
    for (int i=0; i<N; i++) {
        cin >> s;
        if (s[0]=='+' || s[2]=='+') { val++; }
        else                        { val--; }
    }
    cout << val << endline;
    return 0;
}
