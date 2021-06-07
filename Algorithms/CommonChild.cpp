#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    vector< vector < int > > memo(s1.size() + 1, vector< int >(s2.size() + 1));
    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            if (s1[i] == s2[j]) {
                memo[i+1][j+1] = memo[i][j] + 1;
            } else {
                memo[i+1][j+1] = max(memo[i+1][j], memo[i][j+1]);
            }
        }
    }

    /* for (int i = 0; i <= s1.size(); i++) { */
    /*     for (int j = 0; j <= s2.size(); j++) { */
    /*         cout << memo[i][j] << " "; */
    /*     } */
    /*     cout << endl; */
    /* } */

    cout << memo[s1.size()][s2.size()] << endl;

    return 0;
}
