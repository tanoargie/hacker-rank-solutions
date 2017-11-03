#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int res = 0;
    if (m > n) {
        return res;
    } else {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum = sum + s[i];
        }
        if (sum == d) {
            res++;
        }
        for (int j = 0; j < n-m+1; j++) {
            sum = sum - s[j] + s[j+m];
            if (sum == d) {
                res++;
            }
        }
        
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

