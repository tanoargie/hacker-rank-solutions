#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    
    uint64_t sum = 0;
    for (int j = 1; j < arr.size(); j++) {
        sum = sum + arr[j];
    }
    //cout << sum << endl;
    //suma ya tiene la suma de los 5 elementos.
    uint64_t max = sum;
    uint64_t min = sum;
    uint64_t sumaLocal = sum;
    for (int i = 0; i < arr.size()-1; i++) {
        
        sumaLocal = sumaLocal + arr[i] - arr[i+1];
        //cout << i << " " << sumaLocal << endl;
        if (sumaLocal < min) {
            min = sumaLocal;
        }
        if (sumaLocal > max) {
            max = sumaLocal;
        }
    }
    
    cout << min << " " << max << endl;
    return 0;
}

