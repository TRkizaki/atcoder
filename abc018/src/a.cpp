#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int64_t> abc(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> abc[i];
    }
    vector<pair<int64_t, int>> values;
    for (int i = 0; i < 3; i++)
    {
        values.emplace_back(abc[i], i);
    }
    sort(values.begin(), values.end(), greater<pair<int64_t, int>>());
    vector<pair<int, int>> with_rank;
    for (int i = 0; i < 3; i++)
    {
        with_rank.emplace_back(values[i].second, i + 1);
    }
    sort(with_rank.begin(), with_rank.end());
    for (const auto &p : with_rank)
    {
        cout << p.second << endl;
    }
    return 0;
}