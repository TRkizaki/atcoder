#include <bits/stdc++.h>
using namespace std;

int main() {
 long long a, b, c, d;
 cin >> a >> b >> c >> d;
 long long ans = max((a * b), (c * d));
 cout << ans << endl;
 return 0;
}