#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long l, h;
    int n;
    cin >> l >> h >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < l) {
            cout << l - a[i] << endl;
        } else if (h < a[i]) {
            cout << "-1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}