#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (cin >> s) {
    s.erase(remove_if(s.begin(), s.end(), [](char c) {
      return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o';
    }), s.end());
    cout << s << '\n';
  }

  return 0;
}
