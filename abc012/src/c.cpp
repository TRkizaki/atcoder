#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int all = 0;
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 1; b <= 9; b++)
        {
            all += a * b;
        }
    }
    int x = all - n; // xが足りない数字
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 1; b <= 9; b++)
        {
            if (a * b == x)
            {
                cout << a << " x " << b << endl;
            }
        }
    }
    return 0;
}