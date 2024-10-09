#include <iostream>
#include <vector>

int main() {
    int T;
    std::cin >> T;  // Read the number of test cases
    std::vector<int> results;

    for (int i = 0; i < T; ++i) {
        int N, X;
        std::cin >> N >> X;  // Read N and X for each test case

        // Calculate the minimum flips needed
        int min_flips = std::min(X, N - X);
        results.push_back(min_flips);
    }

    // Output all results
    for (int result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}
