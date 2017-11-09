#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       cin >> alice[alice_i];
    }
    
    vector<int> scoresWithoutDuplicates;
    
    scoresWithoutDuplicates.push_back(scores[0]);
    for (int i = 1; i < n; i++) {
        if (scores[i] != scores[i-1]) {
            scoresWithoutDuplicates.push_back(scores[i]);    
        }
    }
    
    vector<int> res;
    for (int i = 0; i < m; i++) {
        int highValue = 0;
        int lowValue = scoresWithoutDuplicates.size() - 1;
        int score = alice[i];
        if (score < scoresWithoutDuplicates[lowValue]) {
            res.push_back(scoresWithoutDuplicates.size() + 1 - highValue);
        } else if (score > scoresWithoutDuplicates[highValue]) {
            res.push_back(scoresWithoutDuplicates.size() - lowValue);
        } else {
            while (lowValue != highValue + 1 && scoresWithoutDuplicates[lowValue] != score && scoresWithoutDuplicates[highValue] != score) {
               //cout << "entre " << score << endl;
               if (scoresWithoutDuplicates[floor((lowValue + highValue) / 2)] < score) {               
                   lowValue = floor((lowValue + highValue) / 2);
                   //cout << "entre2 " << lowValue << " " << highValue << " " << score << endl; 
               } else {    
                   highValue = floor((lowValue + highValue) / 2);
                   //cout << "entre3 " << lowValue << " " << highValue << " " << score << endl; 
               } 
            }
            if (scoresWithoutDuplicates[lowValue] == score) {
                res.push_back(lowValue + 1);
            } else if (scoresWithoutDuplicates[highValue] == score) {
                res.push_back(highValue + 1);
            } else {
                res.push_back(lowValue + 1);
            }
        }
    }
    
    
    for (int j = 0; j < res.size(); j++) {
        cout << res[j] << endl;
    }
    // Write Your Code Here
    return 0;
}

