#include <iostream>
#include <set>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    // Using a set to store the prepared topics
    set<int> preparedTopics = {A, B, C};

    // Check if the assigned topic X is in the set of prepared topics
    if (preparedTopics.find(X) != preparedTopics.end()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
