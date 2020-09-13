#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    float fractionPositive = 0;
    float fractionNegative = 0;
    float fractionZeroes = 0;
    float total = n;
    n--;
    while (n >= 0) {
        if (arr[n] > 0) {
            fractionPositive++;
        } else if (arr[n] == 0) {
            fractionZeroes++;
        } else {
            fractionNegative++;
        }
        n--;
    }
    
    cout << fixed;
    cout << setprecision(6);
    //cout << fractionPositive << endl << total << endl;
    cout << fractionPositive/total << endl;
    cout << fractionNegative/total << endl;
    cout << fractionZeroes/total << endl;
    
    return 0;
}

