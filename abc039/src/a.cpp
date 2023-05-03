#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = ((a * b)+ (b * c)+ (c * a)) * 2;
    cout << ans << endl;
    return 0;
  }
    