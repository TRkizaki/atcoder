#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare a string variable
    string s;

    // Read a string from the standard input
    cin >> s;

    // Iterate through the characters of the string
    for (int i = 0; i < s.size() - 1; i++) {
        // Print the current character followed by a space
        cout << s[i] << ' ';
    }

    // Print the last character without a space and add a newline
    cout << s.back() << endl;

    return 0;
}
