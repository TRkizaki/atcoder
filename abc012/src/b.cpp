#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = n % 60;
    n /= 60;
    int m = n % 60;
    n /= 60;
    int h = n;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}