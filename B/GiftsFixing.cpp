#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

ll min(vector<ll> A) {
    ll min = A[0];
    for (ll c : A) {
        if (c < min) { min = c; }
    }
    return min;
}

int main() {
    ll T, total;
    int N;
    cin >> T;
    for (ll i=0; i<T; i++) {
        cin >> N;
        total=0;
        vector<ll> A(N,0), B(N,0);
        for (ll j=0; j<N; j++) { cin >> A[j]; }
        for (ll j=0; j<N; j++) { cin >> B[j]; }
        ll minA = min(A); 
        ll minB = min(B);
        ll difA, difB, mindif;
        int flag = 1;
        while (flag) {
            for (ll j=0; j<N; j++) {
                if (A[j]>minA && B[j]>minB) {
                    difA = A[j] - minA; 
                    difB = B[j] - minB;
                    mindif = min(difA, difB);
                    total+=mindif;
                    A[j]-=mindif;
                    B[j]-=mindif;
                }
                else if (A[j]>minA) {
                    difA = A[j]-minA;
                    total+=difA;
                    A[j]=minA;
                }
                else if (B[j]>minB) {
                    difB = B[j]-minB;
                    total+=difB;
                    B[j]=minB;
                }
            }
            for (ll j=0; j<N; j++) {
                if (A[j]>minA || B[j]>minB) {
                    flag=1; break;
                }
                flag=0;
            }
        }
        cout << total << endline;
    }
    return 0;
} 
