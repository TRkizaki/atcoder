#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    // Read the number of queries
    int Q;
    cin >> Q;

    // Initialize the stack with 100 cards labeled with 0
    stack<int> cards;
    for (int i = 0; i < 100; i++) {
        cards.push(0);
    }

    // Process queries and collect outputs for type 2 queries
    vector<int> outputs;

    for (int i = 0; i < Q; i++) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            // Type 1: Add a card with label x on top
            int x;
            cin >> x;
            cards.push(x);
        } else if (queryType == 2) {
            // Type 2: Remove the top card and output its label
            int topCard = cards.top();
            cards.pop();
            outputs.push_back(topCard);
        }
    }

    // Print the outputs for type 2 queries
    for (int output : outputs) {
        cout << output << endl;
    }

    return 0;
}
