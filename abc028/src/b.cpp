#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string AF = "ABCDEF";
    
    int c[6];
    for (int i = 0; i < 6; i++) {
      c[i] = count(s.begin(), s.end(), AF[i]);
    }
    string ans = to_string(c[0]);
    for (int i =1; i < 6; i++) {
      ans += " " + to_string(c[i]);
    }
    cout << ans << endl;
    return 0;
 }
     
    