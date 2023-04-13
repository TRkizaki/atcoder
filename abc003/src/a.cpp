#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int x = 1; x <= n; x++) {
        sum += x * 10000;
    }
    double ans = static_cast<double>(sum) / n;
    cout << ans << endl;
    return 0;
}