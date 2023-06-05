// inquiry 2 DP

#include <bits/stdc++.h>
using namespace std;

int dp[10005];

int main()
{

    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    dp[0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 10000; j >= 0; j--) {
            if (dp[j] == 0)
                continue;
            if (j + A[i] <= 10000) {
                dp[j + A[i]] = 1;
            }
        }
    }

    int maxi = 0;
    for (int i = 0; i <= 10000; i++) {
        if (dp[i] == 1 && ((i % 10) != 0)) {
            maxi = max(maxi, i);
        }
    }

    cout << maxi << endl;
}
