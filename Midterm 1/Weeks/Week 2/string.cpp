#include <iostream>
#include <string>
using namespace std;

int main() {
    double radius;
    double pi = 3.14159;
    double area = 0;
    string phrase;

    cout << "Enter a radius: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Error: Radius cannot be negative." << endl;
    } else {
        area = pi * radius * radius;
        cout << "The area of the circle is: " << area << endl;

        if (area < 10) {
            cout << "Small circle" << endl;
        } else if (area <= 50) {
            cout << "Medium circle" << endl;
        } else {
            cout << "Large circle" << endl;
        }
    }

    cin.ignore();
    cout << "Enter a phrase: ";
    getline(cin, phrase, '\n');
    cout << phrase.length() << endl;
    cout << phrase.at(0) << endl;
    phrase += "!";
    string newPhrase = "abcd";

    int phrase_num = phrase.length();
    int newPhrase_num = newPhrase.length();

    if (phrase == newPhrase) {
        cout << "Match FOUND!!!" << endl;
    } else if (phrase_num > newPhrase_num) {
        cout << "Phrase is longer than newPhrase" << endl;
    } else if (phrase_num < newPhrase_num) {
        cout << "newPhrase is longer than phrase" << endl;
    }

    return 0;
}
