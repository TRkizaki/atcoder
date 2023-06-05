// correct inquiry 1
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    if ((sum % 10) != 0) {
        cout << sum << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 10) {
            cout << sum - a[i] << endl;
            return 0;
        }
    }

    cout << "0" << endl;

    return 0;
}
