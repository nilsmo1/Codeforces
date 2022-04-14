#include <iostream>
#include <cmath>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll N, total=0, c, v[4]={0,0,0,0};
    cin >> N;
    for (ll i=0; i<N; i++) {
        cin >> c;
        v[c-1]++;
    }
    total+= v[3];
    if (v[1]%2) { total+=(v[1]-1)/2; v[1]=1; }
    else        { total+=v[1]/2; v[1]=0; }
    while (v[2] && v[0]) {
        total++;
        v[2]--; v[0]--;
    }
    if (v[2]) { total+=v[2]; v[2]=0; }
    else if (v[0]>1 && v[1]) { total++; v[1]=0; v[0]-=2; }
    else if (v[0] && v[1]) { total++; v[1]=0; v[0]=0; }
    else if (v[0]) { total+= ceil(v[0]/4.0f); v[0]=0; }
    if (v[1]) { total++; }
    if (v[0]) { total+= ceil(v[0]/4.0f); }
    cout << total << endline;
    return 0;
}
