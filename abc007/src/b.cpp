#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "a")
            cout << -1 << endl;
        else
            cout << 'a' << endl;
    }
}