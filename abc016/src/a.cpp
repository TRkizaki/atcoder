#include <iostream>
using namespace std;

int main()
{
    int M, D;
    cin >> M >> D;
    bool ans = M % D == 0;
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}