//correct 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, long long>> sp(n); // define a vector of pairs 
    for (int i = 0; i < n; i++) {
        cin >> sp[i].first >> sp[i].second; // read in the city name and population
    }
    // loop through the vector and add up all the populations
    long long sum = 0;
    for (auto [_, p_i] : sp) { 
        sum += p_i;
    }
    //check the population of city is greater than half of the total population
    for (auto [s_i, p_i] : sp) {
        if (p_i > sum / 2) {
            cout << s_i << endl;
            return 0;
        }
    }

    cout << "atcoder" << endl;

    return 0;
}