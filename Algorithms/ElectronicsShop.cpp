#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    sort(keyboards.begin(), keyboards.begin() + keyboards.size());
    sort(drives.begin(), drives.begin() + drives.size());
    
    int maxSoFar = -1;
    for (int i = 0; i < keyboards.size() && (keyboards[i] + drives[0] <= s); i++) {
        int left = 0;
        int right = drives.size() - 1;
        while (right - 1 > left) {
            if (keyboards[i] + drives[right] <= s) {
                maxSoFar = keyboards[i] + drives[right];
                left = right;
            } else {
                if (keyboards[i] + drives[(right + left) / 2] < s) {
                    if (keyboards[i] + drives[(right + left) / 2] > maxSoFar) {
                        maxSoFar = keyboards[i] + drives[(right + left) / 2];
                    }
                    left = (right + left) / 2;
                } else if (keyboards[i] + drives[(right + left) / 2] > s) {
                    right = (right + left) / 2;
                } else {
                    return s;
                }
            }
        }
        if (keyboards[i] + drives[right] > maxSoFar && keyboards[i] + drives[right] <= s)  {
            maxSoFar = keyboards[i] + drives[right];
        } else if (keyboards[i] + drives[left] > maxSoFar && keyboards[i] + drives[left] <= s) {
            maxSoFar = keyboards[i] + drives[left];
        }
    }
    
    return maxSoFar;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}

