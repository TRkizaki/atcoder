#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the length of sequence
    int N;
    cin >> N;

    // Read the sequence
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Check if there's a place where the same element appears three times in a row
    bool found = false;
    for (int i = 0; i <= N - 3; i++) {
        if (A[i] == A[i + 1] && A[i] == A[i + 2]) {
            found = true;
            break;
        }
    }

    // Output the result
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
