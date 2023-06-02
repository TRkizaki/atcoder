#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    bool ans = (a <= c && c <= b);
    std::cout << (ans ? "Yes" : "No") << std::endl;

    return 0;
}
