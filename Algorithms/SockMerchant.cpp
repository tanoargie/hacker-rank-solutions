#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    map < int, int > dic;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (dic[ar[i]] % 2 == 1) {
            res++;
        }
        dic[ar[i]]++;
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
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}

