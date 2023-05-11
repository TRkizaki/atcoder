#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int max = 0;
    int cur = 0;
    for (char s_i : s) {
        switch (s_i) {
            case 'I':
                cur += 1;
                break;
            case 'D':
                cur -= 1;
                break;
            default:
                cerr << "Error: unexpected character" << endl;
                return 1;
        }
        if (cur > max) {
            max = cur;
        }
    }
    int ans = max;
    cout << ans << endl;
    return 0;
}