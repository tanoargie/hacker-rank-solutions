#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    // Complete this function
    int res = 0;
    if (ar.size() < 2) {
        return res;
    } else {
        vector < int > modulus(k, 0);
        for (int i = 0; i < n; i++) {
            modulus[ar[i] % k]++;
            ar[i] = ar[i] % k;
        }
        
        for (int j = n-1; j >= 0; j--) {
            if (ar[j] == 0 || (k % 2 == 0 && ar[j] == k/2)) {
                if (modulus[ar[j]] > 0) {
                    modulus[ar[j]]--;
                    res = res + modulus[ar[j]];
                }
            } else {
                if (modulus[k-ar[j]] > 0) {
                    res = res + modulus[k-ar[j]];
                    modulus[ar[j]]--;
                }
            }    
        }
    }
    return res;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}

