#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long a, b, c, k, s, t;
    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &k, &s, &t);
    long long ans;
    if (s + t >= k) {
        ans = s * (a - c) + t * (b - c);
    } else {
        ans = s * a + t * b;
    }
    printf("%lld\n", ans);
    return 0;
}