#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int max = 0;
    int res = 0;
    for (int i = 0; i < ar.size(); i++) {
        if (ar[i] > max) {
            max = ar[i];
        }
    }

    for (int j = 0; j < ar.size(); j++) {
        if (ar[j] == max) {
            res++;
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

