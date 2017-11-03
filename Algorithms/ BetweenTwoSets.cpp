#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int res = 0;
    int mayorDeA = a[a.size() - 1];
    int menorDeB = b[0];
    while (mayorDeA <= menorDeB) {
        bool esX = true;
        int j = 0;
        while (j < a.size() && esX == true) {
            if (mayorDeA % a[j] != 0) {
                esX = false;
            }
            j++;
        }
        int p = 0;
        while (p < b.size() && esX == true) {
            if (b[p] % mayorDeA != 0) {
                esX = false;
            }
            p++;
        }
        if (esX == true) {
            res++;
        }
        mayorDeA++;
    }
    
    
    return res;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

