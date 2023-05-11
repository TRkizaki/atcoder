
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    char op;
    cin >> a >> op >> b;
    long long ans = 0;
    switch (op) {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        default:
            cerr << "Invalid operator: " << op << endl;
            return 1;
    }
    cout << ans << endl;
    return 0;
}