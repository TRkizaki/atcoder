#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    vector<long long> W(M);
    for (int i = 0; i < M; i++) {
        cin >> W[i];
    }

    // Sort both arrays in descending order
    sort(B.begin(), B.end(), greater<long long>());
    sort(W.begin(), W.end(), greater<long long>());

    // Precompute cumulative sums
    vector<long long> prefixSumB(N + 1, 0);
    for (int i = 0; i < N; i++) {
        prefixSumB[i + 1] = prefixSumB[i] + B[i];
    }

    vector<long long> prefixSumW(M + 1, 0);
    for (int i = 0; i < M; i++) {
        prefixSumW[i + 1] = prefixSumW[i] + W[i];
    }

    // Find the maximum sum
    long long maxSum = 0;

    // Precompute the number of positive black balls
    int posBlackCount = 0;
    while (posBlackCount < N && B[posBlackCount] > 0) {
        posBlackCount++;
    }

    // Try different numbers of white balls (0 to M)
    for (int w = 0; w <= M; w++) {
        // Must have at least w black balls
        if (w > N) break;

        // White sum
        long long whiteSum = prefixSumW[w];

        // Black sum - take the maximum between:
        // 1. Minimum required black balls (w)
        // 2. All positive black balls
        int blackCount = max(w, posBlackCount);
        blackCount = min(blackCount, N); // Cannot exceed N

        long long blackSum = prefixSumB[blackCount];
        long long totalSum = whiteSum + blackSum;

        maxSum = max(maxSum, totalSum);

        // Early termination if adding more white balls would decrease the sum
        if (w < M && W[w] <= 0) break;
    }

    cout << maxSum << endl;
    return 0;
}
