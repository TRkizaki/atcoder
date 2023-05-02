#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ans = s[s.size() -1] == 'T';
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}