#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int pointsAlice = 0;
    int pointsBob = 0;
    if (a0 > b0) {
        pointsAlice++;
    } else if (b0 > a0) {
        pointsBob++;
    }
    if (a1 > b1) {
        pointsAlice++;
    } else if (b1 > a1) {
        pointsBob++;
    }
    if (a2 > b2) {
        pointsAlice++;
    } else if (b2 > a2) {
        pointsBob++;
    }
    int myints[] = {pointsAlice, pointsBob};
    vector < int > ret (myints, myints + sizeof(myints) / sizeof(int));
        
    return ret;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}

