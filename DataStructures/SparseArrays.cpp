#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numberStrings;
    cin >> numberStrings;
    vector < string > ar(numberStrings);
    int i = 0;
    while (i < numberStrings) {
        cin >> ar[i];
        i++;
    }
    int numberQueries;
    cin >> numberQueries;
    vector < string > arr(numberQueries);
    int j = 0;
    while (j < numberQueries) {
        cin >> arr[j];
        i = 0;
        int count = 0;
        while (i < numberStrings) {
            if (arr[j] == ar[i]) {
                count++;
            }
            i++;
        }
        cout << count << endl;
        j++;
    }
    return 0;
}

