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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    vector<int> buckets(100, 0);
    for (int i = 0; i < n; i++) {
        buckets[a[i]]++;
    }
    
    /*for (int k = 0; k < 100; k++) {
        cout << buckets[k] << endl;
    }*/
    
    for (int j = 0; j < 100; j++) {
        int resParcial = 0;
        if (j != n - 1) {
            if (buckets[j] != 0 && buckets[j+1] != 0) {
                //cout << buckets[j] << " " << buckets[j] << endl;
                resParcial = resParcial + (buckets[j])+(buckets[j+1]);
            }
            if (buckets[j] >= 2 && buckets[j] > resParcial) {
                resParcial = buckets[j];
            }
            buckets[j] = resParcial;
        }
    }
    
    
    
    cout << *max_element(buckets.begin(), buckets.end()) << endl;
    
    return 0;
}


