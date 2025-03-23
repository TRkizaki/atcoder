#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Count frequency of each integer
    unordered_map<int, int> frequency;
    for (int i = 0; i < N; i++) {
        frequency[A[i]]++;
    }

    // Find people who satisfy the condition and track the max
    int max_value = -1;
    int max_person = -1;

    for (int i = 0; i < N; i++) {
        // A person satisfies if their integer appears exactly once in the array
        if (frequency[A[i]] == 1) {
            if (A[i] > max_value) {
                max_value = A[i];
                max_person = i;
            }
        }
    }

    // Print result
    if (max_person == -1) {
        cout << -1 << endl;
    } else {
        cout << max_person + 1 << endl; // 1-indexed output
    }

    return 0;
}
