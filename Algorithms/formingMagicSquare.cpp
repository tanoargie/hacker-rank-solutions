#include <bits/stdc++.h>

using namespace std;

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    int all_possible_squares[8][3][3] = {
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}
    };
    
    //cout << all_possible_squares[0][1][0] << endl;
    //cout << s[1][0] << endl;
    
    vector < int > totalCosts;
    for (int i = 0; i < 8; i++) {
        int cost = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                 if (s[k][j] != all_possible_squares[i][k][j])  {
                     //cout << all_possible_squares[i][k][j] << " " << s[k][j] << " " << k << " " << j << endl;
                     cost = cost + abs(s[k][j] - all_possible_squares[i][k][j]);
                 }
            }
        }
        totalCosts.push_back(cost);
    }
    
    cout << *min_element(totalCosts.begin(), totalCosts.end()) << endl;
    
    //  Print the minimum cost of converting 's' into a magic square
    return 0;
}

