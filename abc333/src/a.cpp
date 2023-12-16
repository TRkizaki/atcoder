#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    if (n < 1 || n > 9)
    {
        return 1;
    }

    std::string result;
    for (int i = 0; i < n; ++i)
    {
        result += std::to_string(n);
    }

    std::cout << result << std::endl;

    return 0;
}