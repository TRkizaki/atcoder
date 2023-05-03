#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  int ans = min((x - 1), (n - x));
  cout << ans << endl;
  return 0;
}
  