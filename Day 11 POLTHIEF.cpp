#include <iostream>
#include <cstdlib> // for abs

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;
        // Calculate the time taken to catch the thief
        int timeToCatch = abs(Y - X);
        cout << timeToCatch << "\n";
    }

    return 0;
}
