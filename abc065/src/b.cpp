#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--; // Adjusting the 0-based indexing
    }

    long long count = 0;
    int a_c = 0;
    for (int i = 0; i <= n; i++) {
        count++;
        a_c = a[a_c];
        if (a_c == 1) {
            break;
        }
    }

    long long ans = (count == static_cast<long long>(n + 1)) ? -1 : count;
    cout << ans << endl;

    return 0;
}
