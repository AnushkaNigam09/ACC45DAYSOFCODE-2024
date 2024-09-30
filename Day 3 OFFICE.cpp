#include <iostream>
using namespace std;

int calculate_total_hours(int x, int y) {
    // Calculate total hours for Monday to Thursday
    int monday_to_thursday_hours = x * 4;

    // Calculate total hours for Friday
    int friday_hours = y;

    // Calculate total working hours in a week
    int total_hours = monday_to_thursday_hours + friday_hours;

    return total_hours;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int total_hours = calculate_total_hours(x, y);
        cout << total_hours << endl;
    }

    return 0;
}