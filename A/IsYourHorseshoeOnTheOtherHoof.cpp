#include <iostream>
#include <set>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll s1, s2, s3, s4;
    set<ll> shoes;
    cin >> s1 >> s2 >> s3 >> s4;
    shoes.insert(s1);
    shoes.insert(s2);
    shoes.insert(s3);
    shoes.insert(s4);
    cout << 4 - shoes.size() << endline;
    return 0;
}
