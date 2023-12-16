#include <iostream>

int main()
{
    int N, S, K;
    std::cin >> N >> S >> K;

    int totalCost = 0;

    for (int i = 1; i <= N; ++i) {
        int P, Q;
        std::cin >> P >> Q;

        totalCost += P * Q;
    }

    int paymentAmount = totalCost + ((totalCost >= S) ? 0 : K);

    std::cout << paymentAmount << std::endl;

    return 0;
}
