#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    int n;
    cin >> n;
    vector<string> vec(n, "");
    for (int i=0; i<n; i++) {
        cin >> vec[i];
    }
    for (int i=0; i<n; i++) {
        int len = vec[i].length();
        char first = vec[i][0];
        char last = vec[i][len-1];
        if (len > 10) { cout << first << len-2 << last << endline; }
        else { cout << vec[i] << endline; }
    }
    return 0;
}
