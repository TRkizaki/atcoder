#include <deque>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<long long> d;
    bool is_back = true;
    for (int i = 0; i < n; i++) {
        long long a_i;
        cin >> a_i;
        // i と n の偶奇が一致していなければ、数列の後ろに ai を追加する。
        if (is_back) {
            d.push_back(a_i);
        } else {
            d.push_front(a_i);
        }
        is_back = !is_back;
    }

    vector<const long long*> b;
    if (is_back) {
        for (const auto& element : d) {
            b.push_back(&element);
        }
    } else {
        for (auto it = d.rbegin(); it != d.rend(); ++it) {
            b.push_back(&(*it));
        }
    }

    for (size_t i = 0; i < b.size(); i++) {
        cout << *b[i];
        if (i == b.size() - 1) {
            cout << "\n";
        } else {
            cout << " ";
        }
    }

    return 0;
}
