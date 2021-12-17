#include <iostream>
#include <set>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int y;
    cin >> y;
    while (true) {
        set<int> ds;
        y++;
        ll ycopy = y;
        for (int _=0; _<4; _++) {
            ds.insert(ycopy%10);
            ycopy/=10;
        }
        if (ds.size() == 4) { cout << y << endline; break; }
    }
    return 0;
}
