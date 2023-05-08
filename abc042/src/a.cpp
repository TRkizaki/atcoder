#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int64_t> abc(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> abc[i];
    }
    sort(abc.begin(), abc.end());
    bool ans = abc == vector<int64_t>{5, 5, 7};
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
