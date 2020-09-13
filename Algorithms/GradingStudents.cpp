#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    vector < int > res(grades.size(), 0);
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] < 38) {
            res[i] = grades[i];
        } else {
            if (grades[i] % 5 >= 3) {
                res[i] = grades[i] + (5 - grades[i] % 5);
            } else {
                res[i] = grades[i];
            }
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}

