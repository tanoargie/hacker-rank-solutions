#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arrLength;
    int rotations;
    cin >> arrLength;
    cin >> rotations;
    vector<int> arr(arrLength);
    for(int arr_i = 0;arr_i < arrLength;arr_i++){
       cin >> arr[arr_i];
    }
    while (rotations > 0) {
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
        rotations--;
    }
    
    for (int j = 0; j < arrLength; j++) {
        cout << arr[j] << " ";
    }
    
    return 0;
}

