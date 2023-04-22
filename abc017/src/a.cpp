#include <bits/stdc++.h> // Include all standard C++ headers
using namespace std;

int main()
{
    // Define a vector of 3 pairs of long long integers named "se"
    vector<pair<long long, long long>> se(3);

    // Read in the three pairs of integers from standard input using the input stream "cin"
    for (auto &p : se)
    {
        cin >> p.first >> p.second;
    }

    // Calculate the sum of the products of s_i divided by 10 and e_i for each pair of integers
    long long ans = 0;
    for (const auto &p : se)
    {
        ans += p.first / 10 * p.second;
    }

    // Output the result to standard output using the output stream "cout"
    cout << ans << endl;

    // Exit the program with a status code of 0 to indicate success
    return 0;
}