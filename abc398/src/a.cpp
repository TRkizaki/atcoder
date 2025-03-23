#include <iostream>
#include <string>
using namespace std;

string generateSpecialPalindrome(int n) {
    string result(n, '-');

    // For odd-length strings
    if (n % 2 == 1) {
        // Place a single '=' at the center
        result[n / 2] = '=';
    }
    // For even-length strings
    else {
        // Place two adjacent '=' characters at the center
        result[n / 2 - 1] = '=';
        result[n / 2] = '=';
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    // Check constraints
    if (n < 1 || n > 100) {
        cerr << "N must be between 1 and 100 inclusive." << endl;
        return 1;
    }

    string answer = generateSpecialPalindrome(n);
    cout << answer << endl;

    return 0;
}
