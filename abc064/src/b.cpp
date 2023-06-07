#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int max_val = 0;
    int min_val = INT_MAX;
    for (int i = 0; i < N - 1; i++) {
        max_val = max(max_val, a[i]);
        min_val = min(min_val, a[i]);
    }
    cout << max_val - min_val << endl;
    return 0;
}
