#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string inputString;
    int size;
    cin >> size >> inputString;
    vector< int > streak;
    int res = 1;
    for (int i = 0; i < size; i++) {
        streak.push_back(1);
    }
    for (int i = 1; i < size; i++) {
        if (inputString[i] == inputString[i - 1]) {
            streak[i] = streak[i-1] + 1;
        }
        res += streak[i];
        int mirrorPositionLastStreak = i - streak[i] - 1;
        if (mirrorPositionLastStreak >= 0 && inputString[i] == inputString[mirrorPositionLastStreak] && streak[i] <= streak[mirrorPositionLastStreak]) {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}
