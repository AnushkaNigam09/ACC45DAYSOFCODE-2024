#include <iostream>
#include <algorithm> // For std::max

using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d; // Read the tastiness values

        // Calculate all possible tastiness values
        int option1 = a + c; // A + C
        int option2 = a + d; // A + D
        int option3 = b + c; // B + C
        int option4 = b + d; // B + D

        // Find the maximum tastiness
        int maxTastiness = max({option1, option2, option3, option4});

        // Output the result for the current test case
        cout << maxTastiness << endl;
    }

    return 0;
}
