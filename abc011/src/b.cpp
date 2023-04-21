#include <iostream> // Input and output operations
#include <string>   // String class
#include <cctype>   // Character handling functions

using namespace std; // Namespace declaration

int main()
{ // Main function

    ios_base::sync_with_stdio(false); // Disables synchronization between C and C++ streams for faster input/output.
    cin.tie(nullptr);                 // Unsets the tie between cin and cout for faster input/output.

    string s; // Declares a string variable named s.
    while (cin >> s)
    { // Reads words from input and stores them in s until end-of-file is reached.

        bool first = true; // Flag to check if the current character is the first in a word.
        for (char c : s)
        { // Iterates over each character in the current word.

            if (first)
            {                                          // If the current character is the first in a word...
                cout << static_cast<char>(toupper(c)); // ...convert it to uppercase...
                first = false;                         // ...and set the first flag to false to indicate that the first character has been processed.
            }
            else
            {                                          // Otherwise...
                cout << static_cast<char>(tolower(c)); // ...convert the character to lowercase...
            }
        }
        cout << '\n'; // Outputs a newline after processing each word.
    }

    return 0; // Returns 0 to indicate successful program termination.
}