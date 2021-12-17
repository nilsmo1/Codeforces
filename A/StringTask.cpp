#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    string s;
    cin >> s;
    vector<char> vec;
    set<char> vowels{ 'a', 'o', 'y', 'e', 'u', 'i' };
    for (char c : s) {
        bool consonant = (vowels.find((char) tolower(c)) == vowels.end() &&
                       vowels.find((char) toupper(c)) == vowels.end());
        if (consonant) { vec.push_back((char) tolower(c)); }
    }
    for (char c : vec) {
        cout << "." << c;
    }
    cout << endline;
    return 0;
}
