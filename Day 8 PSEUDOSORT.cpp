#include <iostream>
#include <vector>
using namespace std;

bool isPseudoSorted(vector<int>& A) {
    int inversions = 0;
    int n = A.size();

    for (int i = 0; i < n - 1; ++i) {
        if (A[i] > A[i + 1]) {
            inversions++;
            // If more than one inversion, we can directly return false
            if (inversions > 1) {
                return false;
            }
        }
    }

    // If there are no inversions, the array is already sorted
    if (inversions == 0) {
        return true;
    }

    // If we have exactly one inversion, check if we can swap
    for (int i = 0; i < n - 1; ++i) {
        if (A[i] > A[i + 1]) {
            // Try swapping A[i] and A[i + 1]
            swap(A[i], A[i + 1]);
            // Check if sorted
            bool sorted = true;
            for (int j = 0; j < n - 1; ++j) {
                if (A[j] > A[j + 1]) {
                    sorted = false;
                    break;
                }
            }
            // Swap back to restore original array
            swap(A[i], A[i + 1]);
            return sorted;
        }
    }

    return false; // Should not reach here
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        if (isPseudoSorted(A)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
