#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K, M;
        cin >> N >> K >> M;
        
        int capacity = K * M;  // Maximum candies a bag can hold
        // Calculate the minimum number of bags needed
        int min_bags = (N + capacity - 1) / capacity;  // Equivalent to ceil(N / capacity)
        
        cout << min_bags << endl;
    }
    
    return 0;
}

