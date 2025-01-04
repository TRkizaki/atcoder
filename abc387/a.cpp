#include <iostream>
using namespace std;

int main() {

    long long A, B;

    cin >> A >> B;

    if (A < 1 || A > 2025 || B < 1 || B > 2025) {
        return 1;
    }

    long long sum = A + B;
    long long result = sum * sum;

    cout << result << endl;

    return 0;
}
