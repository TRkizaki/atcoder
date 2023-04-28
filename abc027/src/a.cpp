#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> l(3);
    for (int i = 0; i < 3; i++) {
        cin >> l[i];
    }
    int ans;
    if (l[0] == l[1]) {
        ans = l[2];
    } else if (l[0] == l[2]) {
        ans = l[1];
    } else {
        ans = l[0];
    }
    cout << ans << endl;
    return 0;
}