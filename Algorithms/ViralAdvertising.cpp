#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    // Complete this function
    if (n == 1) {
        return 2;
    } else {
        return (viralAdvertising(n - 1)*3 / 2);
    }
}

int main() {
    int n;
    cin >> n;
    int pepe = 0;
    for (int i = 1; i <= n; i++) {
        pepe += viralAdvertising(i);
    }
    int result = pepe;
    cout << result << endl;
    return 0;
}
