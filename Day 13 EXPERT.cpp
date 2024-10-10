#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    
    while (T--) {
        long long X, Y;
        cin >> X >> Y; // Read X and Y
        
        // Check if Y is at least 50% of X
        if (Y * 2 >= X) {
            cout << "YES" << endl; // Munchy is an expert
        } else {
            cout << "NO" << endl; // Munchy is not an expert
        }
    }
    
    return 0;
}
