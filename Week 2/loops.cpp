#include <iostream>
using namespace std;

int main() {
    int value = 0;
    int sum = 0;
    int count = 0;

    while (true) {
        cout << "Enter a positive integer (0 to stop): ";
        cin >> value;

        if (value == 0) {
            break;
        }

        if (value < 0) {
            continue;
        }

        sum += value;
        count++;

        if (sum >= 100) {
            cout << "Target reached!" << endl;
            break;
        }
    }

    cout << "Final Sum: " << sum << endl;
    cout << "Valid Numbers Count: " << count << endl;

    return 0;
}