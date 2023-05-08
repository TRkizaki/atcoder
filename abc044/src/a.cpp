#include <iostream>
#include <vector>

int main() {
    int n, k, x, y;
    std::cin >> n >> k >> x >> y;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i <= k) {
            sum += x;
        } else {
            sum += y;
        }
    }
    int ans = sum;

    std::cout << ans << std::endl;
    return 0;
}