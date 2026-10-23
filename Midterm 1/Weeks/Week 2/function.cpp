#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int my_rand(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(nullptr));

    int min = 0;
    int max = 100;

    cout << my_rand(min, max) << endl;

    return 0;
}