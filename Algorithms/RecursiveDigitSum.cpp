#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string algorithm(string number, long k) {
    if (number.size() > 1) {
        long long sum = 0;
        for (int i = 0; i < number.size(); i++) {
            sum += number[i] - '0';
        }
        sum *= k;
        return algorithm(to_string(sum), 1);
    } else {
        return number;
    }
}

int main() {
    string n;
    long k;
    cin >> n >> k;
    cout << algorithm(n, k) << endl;
    return 0;
}