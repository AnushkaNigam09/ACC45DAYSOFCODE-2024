#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T; 

    while (T--) {
        int N; // Weight of the pulp in kgs
        cin >> N;

        // 1 kg of pulp can make 1000 pages
        // 1 notebook consists of 100 pages
        int pages = N * 1000; // Total pages that can be made from N kgs of pulp
        int notebooks = pages / 100; // Total notebooks that can be made

        cout << notebooks << endl; // Output the number of notebooks
    }

    return 0;
}
