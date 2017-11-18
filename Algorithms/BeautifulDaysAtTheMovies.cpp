#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reversed(int p) {
    string pepe = to_string(p);
    //cout << pepe << endl;
    for (int i = 0; i < floor(pepe.size() / 2); i++) {
        char c = pepe[i];
        pepe[i] = pepe[pepe.size() - 1 - i];
        pepe[pepe.size() - 1 - i] = c;
    }
    //cout << pepe << endl;
    return stoi(pepe);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, k;
    int res = 0;
    cin >> i >> j >> k;
    for (int p = i; p <= j; p++) {
        if (abs(p - reversed(p)) % k == 0) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}

