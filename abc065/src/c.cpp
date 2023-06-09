#include <stdio.h>
#define MOD 1000000007
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x)) // absolute value
typedef long long ll;
ll _fact(ll r)
{
    ll ans = 1;
    for (ll i = 1; i <= r; i++) {
        ans = ans * i % MOD;
    }
    return ans;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (ABS(n - m) >= 2) {
        printf("0\n");
        return 0;
    } // [1]

    ll ans = 0;
    if (n == m) {
        ans = (_fact(n) * _fact(m) % MOD) * 2 % MOD;
    } // [3]
    else {
        ans = (_fact(n) * _fact(m) % MOD);
    } // [2]
    printf("%lld\n", ans);
    return 0;
}
