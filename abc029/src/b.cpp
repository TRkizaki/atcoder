#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> s(12);
    for (int i = 0; i < 12; i++) {
        cin >> s[i];
    }
    int ans = 0;
    for (const string& s_i : s) {
        if (s_i.find('r') != string::npos) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}