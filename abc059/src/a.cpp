#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> s(3);
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    string t;
    t.push_back(s[0][0]);
    t.push_back(s[1][0]);
    t.push_back(s[2][0]);

    for (char& c : t) {
        c = toupper(c);
    }

    cout << t << endl;

    return 0;
}
