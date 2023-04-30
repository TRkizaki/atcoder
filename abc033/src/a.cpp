#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    unordered_set<char> s(n.begin(), n.end());
    string ans = (s.size() == 1) ? "SAME" : "DIFFERENT";
    cout << ans << endl;

    return 0;
}