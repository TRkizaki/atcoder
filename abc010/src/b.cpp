#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    for (long long a_i : a)
    {
        long long m = a_i;
        while (m % 2 == 0 || m % 3 == 2)
        {
            m--;
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}