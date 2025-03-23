#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Optimized solution for Full House problem
bool canFormFullHouse(const vector<int>& cards) {
    // Count frequency of each card value
    unordered_map<int, int> freq;
    for (int card : cards) {
        freq[card]++;
    }

    // Case 1: We already have a three of a kind and a pair
    vector<int> threes, twos;
    for (const auto& [value, count] : freq) {
        if (count >= 3) threes.push_back(value);
        if (count >= 2) twos.push_back(value);
    }

    // If we have at least one three of a kind and a different pair
    for (int three : threes) {
        for (int two : twos) {
            if (three != two) {
                return true;
            }
        }
    }

    // Case 2: We have two pairs and can use one from each
    if (twos.size() >= 2) {
        // Check if we have at least 3 of any pair
        for (const auto& [value, count] : freq) {
            if (count >= 3) {
                int pairsFound = 0;
                for (int two : twos) {
                    if (two != value) {
                        pairsFound++;
                    }
                }
                if (pairsFound > 0) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    vector<int> cards(7);

    // Read seven card values
    for (int i = 0; i < 7; i++) {
        cin >> cards[i];
    }

    // Check if a full house can be formed
    bool result = canFormFullHouse(cards);

    // Print the result
    cout << (result ? "Yes" : "No") << endl;

    return 0;
}
