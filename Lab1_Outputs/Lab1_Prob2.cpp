// Problem 2
#include <iostream>
#include <string>

using namespace std;

int main() {
string Fname;
string Lname;

cout << "Enter your firstname: ";
cin >> Fname;
cout << "Enter your lastname: ";
cin >> Lname;

int lecture_weeks = 16;
int lecture_days = 3;
int lecture_time = 50;
int no_lectures_days = -2;
int no_lectures_week = -1;
double self_study = ((4.5 * 60)*60) * lecture_weeks;

int total_lecture_weeks = lecture_weeks + no_lectures_week;
int total_lecture_days = (total_lecture_weeks * lecture_days) + no_lectures_days;
int total_lecture_time = (total_lecture_days * lecture_time) * 60;
double final_total = total_lecture_time + self_study;

cout << Fname << " " << Lname << endl;
cout << "I am supposed to spend " << final_total << " seconds studying C++ Programming.\n";

return 0;
}