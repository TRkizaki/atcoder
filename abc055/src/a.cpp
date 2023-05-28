#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int x = 0;
    int y = 0;
    for (int i = 1; i <= n; i++) {
        x += 800;
        if (i % 15 == 0) {
            y += 200;
        }
    }
    int ans = x - y;
    std::cout << ans << std::endl;

    return 0;
}
