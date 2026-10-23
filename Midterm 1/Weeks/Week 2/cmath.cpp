#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int main() {
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<> distr(1, 6);

    int sum = 0;

    for (int i = 0; i < 3; ++i) {
        int die1 = distr(eng);
        int die2 = distr(eng);
        int rollTotal = die1 + die2;

        sum += rollTotal;

        cout << "Roll " << (i + 1) << ": " << die1 << " + " << die2 << " = " << rollTotal << '\n';
    }

    cout << "Sum: " << sum << '\n' << endl;

    double pi = 3.14159265358979323846;
    cout << setprecision(3) << setw(0) << pi << endl;

    return 0;
}