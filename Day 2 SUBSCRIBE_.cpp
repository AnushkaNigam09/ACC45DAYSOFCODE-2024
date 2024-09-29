#include <iostream>
using namespace std;

// Function to calculate the total cost
int calculateCost(int N, int X) {
    // Calculate the number of subscriptions needed
    int subscriptionsNeeded = (N + 5) / 6; // This is equivalent to ceil(N / 6)
    // Calculate the total cost
    return subscriptionsNeeded * X;
}

int main() {
    int T; // Number of test cases
    cin >> T; // Read the number of test cases

    while (T--) {
        int N, X; // N: number of friends, X: cost of one subscription
        cin >> N >> X; // Read the values for each test case
        int totalCost = calculateCost(N, X); // Calculate the total cost
        cout << totalCost << endl; // Output the total cost
    }

    return 0;
}
