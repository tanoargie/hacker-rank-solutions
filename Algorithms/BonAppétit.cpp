#include <bits/stdc++.h>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i != k) {
            sum += ar[i];
        }
    }
    if (b == sum / 2) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << b - sum / 2 << endl;
    }
    return 0;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    bonAppetit(n, k, b, ar);
}

