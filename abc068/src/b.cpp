#include <cmath>
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int ans = 0;
    for (int i = 0;; ++i) {
        int x = pow(2, i);
        if (x <= n) {
            ans = x;
        } else {
            break;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
