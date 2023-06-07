#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n); // rate
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    const int colors = 8; // 7 categories + 1 category for rates 3200 and above
    vector<int> counts(colors + 1, 0);
    for (const int& a_i : a) {         // iterate over the rates
        int index = min(a_i / 400, 8); // determine the category index
        counts[index]++;               // increment the count for the corresponding category
    }
    int count = 0;
    for (int i = 0; i < colors; i++) {
        if (counts[i] > 0) {
            count++; // increment the count of distinct colors
        }
    }
    int min = max(count, counts[8] > 0 ? 1 : 0); // calculate the minimum number of distinct colors
    int max = count + counts[8];                 // calculate the maximum number of distinct colors
    cout << min << " " << max << endl;

    return 0;
}
