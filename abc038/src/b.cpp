#include <iostream>

using namespace std;

int main() {
    int h1, w1, h2, w2;
    cin >> h1 >> w1 >> h2 >> w2;
    bool ans = (h1 == h2) || (h1 == w2) || (w1 == h2) || (w1 == w2);
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}