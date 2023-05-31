#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string o, e;
    cin >> o >> e;

    vector<char> s;
    int i = 0;
    int i_o = 0;
    int i_e = 0;
    while (i_o < o.size() || i_e < e.size()) {
        if (i % 2 == 0) {
            if (i_o < o.size()) {
                s.push_back(o[i_o]);
            }
            i_o++;
        } else {
            if (i_e < e.size()) {
                s.push_back(e[i_e]);
            }
            i_e++;
        }
        i++;
    }

    string ans(s.begin(), s.end());
    cout << ans << endl;

    return 0;
}