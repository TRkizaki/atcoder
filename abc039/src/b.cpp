#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long x;
    cin >> x;
    
    for (int n = 1; ; n++) {
        if (pow(n, 4) == x) {
            cout << n << endl;
            return 0;
        }
    }
}
   