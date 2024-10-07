#include <iostream>
#include <algorithm> // For std::min
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N, A;
        cin >> N >> A; // Total people and infected people
        
        // Calculate the number of non-infected people
        int non_infected = N - A;

        // The minimum masks needed to stop the spread
        int result = min(A, non_infected);

        cout << result << endl; // Output the result for this test case
    }
    return 0;
}
