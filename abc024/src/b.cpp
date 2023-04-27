#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    size_t n, t;
    cin >> n >> t;

    vector<size_t> a(n);
    for (size_t i = 0; i < n; ++i) { //N人の人がi番目に通りかかった時刻
        cin >> a[i];
    }
    
    //call the algorithm 
    size_t s = 0;
    for (size_t i = 1; i < n; ++i) { //1人からカウントスタート(iは何番目つまり人数)、
        s += min(a[i] - a[i - 1], t); // index2番めのやつからindex1番めのやつの秒数を計算するようなことをくりかえして足していく表現。tは人数
    }
    s += t;//loopで出てきた数字を全部足す

    cout << s << '\n';

    return 0;
}