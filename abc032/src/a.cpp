#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    for (int x = n; ; x++) {
        if (x % a == 0 && x % b == 0) {
            cout << x << endl;
            break;
        }
    }
    return 0;
}