#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    string res;
    char message = s[8];
    char message2 = s[9];
    if (message == 'A' && message2 == 'M' && s[0] == '1' && s[1] == '2') {
        res = "00" + s.substr(2, 6);
    } else if (message == 'P' && message2 == 'M' && s[0] == '1' && s[1] == '2') {
        res = "12" + s.substr(2, 6);
    } else if (message == 'A' && message2 == 'M') {
        res = s.substr(0,8);
    } else if (message == 'P' && message2 == 'M') {
        int hour = stoi(s.substr(0,2));
        hour += 12;
        string hour2 = to_string(hour);
        res = hour2 + s.substr(2, 6);
    }
    //cout << message == "P" << " " << message2 << endl;
   
    
    return res;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}

