#include <iostream>
#include <cmath>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    double L,B;
    cin >> L >> B;
    if (L==0 || B==0) { cout << 0 << endline; return 0; }
    else if (L==B) { cout << 1 << endline; return 0; }
    cout << ceil(log(L/B)/log(2.0f/3.0f)) << endline;
    // L -> 3L
    // B -> 2B

    // 4 -> 12 -> 36
    // 7 -> 14 -> 28

    /*
    L*3^x > B*2^x         -> 
    L/B > (2/3)^x         -> 
    log(L/B) > x*log(2/3) -> 
    log(L/B)/log(2/3) > x -> 
    x = ciel(log(L/B)/log(2/3))
    */
    return 0;
}
