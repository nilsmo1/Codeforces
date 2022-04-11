#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    vector<char> v;
    string s;
    getline(cin, s);
    for (char c : s) {
        if (c != '+') {
            v.push_back(c);
        }
    }
    sort(v.begin(), v.end());
    for (int i=0; i<v.size(); i++) {
        cout << v[i];
        if (i!=v.size()-1) {
            cout << '+';
        }
    }
    cout << endline;
    return 0;
}
