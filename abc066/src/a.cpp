#include <iostream>
#include <vector>

int main()
{
    std::vector<int64_t> abc(3);
    for (int i = 0; i < 3; ++i) {
        std::cin >> abc[i];
    }

    int64_t sum = 0;
    int64_t maximum = abc[0];

    for (int i = 0; i < 3; ++i) {
        sum += abc[i];
        if (abc[i] > maximum) {
            maximum = abc[i];
        }
    }

    int64_t ans = sum - maximum;
    std::cout << ans << std::endl;

    return 0;
}
