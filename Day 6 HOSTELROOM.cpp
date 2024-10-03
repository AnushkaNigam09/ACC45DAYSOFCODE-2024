#include <iostream>
#include <vector>
#include <algorithm> // for std::max

using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N, X;
        cin >> N >> X; // Read N and X for the current test case
        vector<int> A(N); // Create a vector for the array A

        for (int i = 0; i < N; ++i) {
            cin >> A[i]; // Read the elements of array A
        }

        int current_people = X; // Start with the initial number of people
        int max_people = X; // Initialize max_people with the initial count

        // Process each event in the array A
        for (int i = 0; i < N; ++i) {
            current_people += A[i]; // Update the current number of people
            max_people = max(max_people, current_people); // Update max_people if needed
        }

        cout << max_people << endl; // Output the maximum number of people for this test case
    }

    return 0;
}
