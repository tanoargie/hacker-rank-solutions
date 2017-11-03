#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i = 1;
    int j = 0;
    while (i < n+1) {
        int p = i;
        while (i < n) {
            cout << " ";
            i++;
        }
        i = p;
        while (i > 0) {
            cout << "#";
            i--;
        }
        i = p;
        i++;
        cout << endl;
    }
    
    return 0;
}

