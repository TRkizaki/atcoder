
#include <iostream>
using namespace std;

int main() {
    long long w, h;
    cin >> w >> h;
    string ans;
    if (w * 3 == h * 4) {
        ans = "4:3";
    } else if (w * 9 == h * 16) {
        ans = "16:9";
    } else {
        // unreachable!()
        exit(1);
    }
    cout << ans << endl;
    return 0;
} 
    