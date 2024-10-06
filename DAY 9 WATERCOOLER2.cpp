#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases

    while (T--) {
        long long X, Y;
        cin >> X >> Y; // Read monthly rent and purchase cost

        if (Y <= X) {
            cout << 0 << endl; // If purchasing is cheaper or equal, output 0
        } else {
            // Calculate the maximum number of months
            long long max_months = (Y - 1) / X; // (Y - 1) to ensure strictly less
            cout << max_months << endl;
        }
    }

    return 0;
}
