#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int max;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int sum = 0;
            for (int k = i; k < i+3; k++) {
                for (int p = j; p < j+3; p++) {
                    sum = sum + arr[k][p];
                }
            }
            sum = sum - arr[i+1][j] - arr[i+1][j+2];
            if (i == 0 && j == 0) {
                max = sum;
            }         
            if (sum > max) {
                max = sum;
            }
            sum = 0;
        }
    }
    cout << max;
    return 0;
}

