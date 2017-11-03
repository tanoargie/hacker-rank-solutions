#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    if (year >= 1919) {
        //gregorian
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            //is leap year
            return "12.09." + to_string(year);
        } else {
            //is not leap year
            return "13.09." + to_string(year);
        }
    } else if (year == 1918) {
        //1918 is not leap year under gregorian calendar
        return "26.09." + to_string(year);
    } else {
        //julian
        if (year % 4 == 0) {
            //leap year
            return "12.09." + to_string(year);
        } else {
            //not a leap year
            return "13.09." + to_string(year);
        }
    }
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}

