#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getN(int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        return getN(n-1) + 1;
    } else if (n % 2 == 1) {
        return getN(n-1)*2;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << getN(n) << endl;
    }
    
    return 0;
}

