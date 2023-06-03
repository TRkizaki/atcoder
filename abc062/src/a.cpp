#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vc { -1, 0, 2, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0 };

    int x, y;
    cin >> x >> y;

    cout << (vc[x] == vc[y] ? "Yes" : "No") << endl;
}
