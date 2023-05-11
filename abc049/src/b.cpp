#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    for (int i = 0; i < h; i++) {
        cin >> c[i];
    }
    for (auto c_i : c) {
        cout << c_i << endl;
        cout << c_i << endl;
    }
    return 0;
}