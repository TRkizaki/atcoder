#include <iostream>
#include <set>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    std::set<int> S = {1, 2, 3};
    S.erase(A); // If A is in S, erase it; if not, do nothing
    S.erase(B); // If B is in S, erase it; if not, do nothing
    
    if (S.size() == 1) {
        std::cout << *S.begin() << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
    
    return 0;
}