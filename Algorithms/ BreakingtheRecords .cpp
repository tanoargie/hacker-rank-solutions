#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int timesLowest = 0;
    int timesHighest = 0;
    int highest = s[0];
    int lowest = s[0];
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > highest) {
            timesHighest++;
            highest = s[i];
        }
        if (s[i] < lowest) {
            timesLowest++;
            lowest = s[i];
        }
    }
    
    int myints[] = {timesHighest, timesLowest};
    vector<int> res (myints, myints + sizeof(myints) / sizeof(int) );
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}

