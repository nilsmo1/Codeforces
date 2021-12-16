#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = int64_t;
using ld = long double;
#define endline '\n';

int main() {
    ll n,l;
    cin >> n >> l;
    ld arr[n];
    for (ll i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    ld maxdist = 0;
    for (ll i=0; i<n-1; i++) {
        ld d = abs(arr[i]-arr[i+1]);
        if (d > maxdist) { maxdist = d; }
    }
    maxdist /= 2.0;
    if (arr[0] > maxdist) { maxdist = arr[0]; }
    if (l-arr[n-1] > maxdist) { maxdist = l-arr[n-1]; }
    cout.precision(20);
    cout << maxdist << endline;
    return 0;
}
