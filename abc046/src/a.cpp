#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    vector<int> abc(3);
    for (int i = 0; i < 3; i++) {
        cin >> abc[i];
    }
    unordered_set<int> s(abc.begin(), abc.end());
    int ans = s.size();
    cout << ans << endl;
    return 0;
}