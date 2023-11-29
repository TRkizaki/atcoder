#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x; // n問, xはscore limit
    cin >> n >> x;

    vector<int> a(n); // Correct the vector declaration

    int sum = 0;
    for (int i = 0; i < n; i++) { // Fix the loop index starting from 0
        cin >> a[i];
        if (a[i] <= x) { // Fix the comparison with the score limit
            sum += a[i];
        }
    }

    int ans = sum;

    cout << ans << endl;
    return 0;
}
