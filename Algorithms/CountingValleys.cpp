#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string hike;
    
    int absoluteLevel = 0;
    int valleys = 0;
    
    cin >> n;
    cin >> hike;
    for (int i = 0; i < n; i++) {
        if (hike[i] == 'U') {
            if (absoluteLevel == -1) {
                valleys++;
            }
            absoluteLevel++;
        } else {
            absoluteLevel--;
        }
    }
    
    cout << valleys << endl;
}

