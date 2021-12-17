#include <iostream>
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int a,b;
    cin >> a >> b;
    cout << min(a,b) << " " << (max(a,b)-min(a,b))/2 << endline;
    return 0;
}
