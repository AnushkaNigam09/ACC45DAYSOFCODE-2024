#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;  // Read N and K

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];  // Read the withdrawal amounts
        }

        string result;  // To store the result for this test case
        int current_money = K;

        for (int i = 0; i < N; ++i) {
            if (current_money >= A[i]) {
                result += '1';  // Successful withdrawal
                current_money -= A[i];  // Deduct the amount from ATM
            } else {
                result += '0';  // Unsuccessful withdrawal
            }
        }

        cout << result << endl;  // Output the result for this test case
    }

    return 0;
}
