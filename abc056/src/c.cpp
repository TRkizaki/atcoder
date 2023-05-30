#include <iostream>

int main() {
    int64_t x;
    std::cin >> x;

    int64_t c = 0;
    int64_t s = 0;
    for (int64_t i = 0;; i++) {
        if (s >= x) {
            break;
        }
        s += i;
        c = i;
    }

    int64_t ans = c;
    std::cout << ans << std::endl;
    return 0;
}