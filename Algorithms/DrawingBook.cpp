#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int fromLeft = p / 2;
    int fromRight = n/2 - p/2;
    
    return min(fromLeft, fromRight);
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}

