#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    vector <int> times(5,0);
    for (int i = 0; i < n; i++) {
        times[ar[i] - 1]++;
    }
    int max = 1;
    for (int j = 0; j < times.size(); j++) {
        if (times[j] > times[max - 1]) {
            max = j + 1;
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

