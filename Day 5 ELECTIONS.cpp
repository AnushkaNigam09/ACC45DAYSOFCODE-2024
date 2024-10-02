#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int XA, XB, XC; // Votes for parties A, B, and C
        cin >> XA >> XB >> XC;

        // Determine if any party has a clear majority
        if (XA > 50) {
            cout << "A" << endl;
        } else if (XB > 50) {
            cout << "B" << endl;
        } else if (XC > 50) {
            cout << "C" << endl;
        } else {
            cout << "NOTA" << endl;
        }
    }

    return 0;
}
