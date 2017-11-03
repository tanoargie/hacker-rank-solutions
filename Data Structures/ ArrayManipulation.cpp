#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    long int listSize;
    cin >> listSize;
    vector<long int> arr(listSize, 0);
    
    long int numberOperations;
    cin >> numberOperations;
    
    long int j = 0;
    long int max = 0;
    while (j < numberOperations) {
        long int firstPlace;
        long int secondPlace;
        long int amount;
        cin >> firstPlace;
        cin >> secondPlace;
        cin >> amount;
        arr[firstPlace-1] += amount;
        arr[secondPlace] -= amount;
        j++;
    }
    
    long int sum = 0;
    for (int i = 0; i < listSize; i++) {
        sum = sum + arr[i];
        if (sum > max) {
            max = sum;
        }
    }
    
    cout << max << endl;
    
    return 0;
}

