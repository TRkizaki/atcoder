#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool ans = n % 3 == 0;
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
