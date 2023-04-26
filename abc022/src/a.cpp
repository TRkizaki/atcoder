#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;             // 何日目
    long long s, t, w; // 体重Sキログラム以上Tキログラム以下(bestbody) 1日目のの体重W
    cin >> n >> s >> t >> w;
    vector<long long> a(n - 1); // 1日目以外の体重リストであるarray=a
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i]; // i日目の体重
    }
    long long c = w;                        // cはi日目の体重でありupdateされるbody weight
    int count = (s <= c && c <= t) ? 1 : 0; // bestbodyか判定
    for (int i = 0; i < n - 1; i++)
    {
        c += a[i]; //
        if (s <= c && c <= t)
        {
            count++; // bestbodyである日数
        }
    }
    cout << count << endl;
    return 0;
}