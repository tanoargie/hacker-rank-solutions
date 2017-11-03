#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    if (x1 > x2) {
        if (v1 > v2) {
            return "NO";
        } else {
            //x1 > x2 && v2 >= v1
            while (x1 != x2 && x1 > x2) {
                x1 = x1 + v1;
                x2 = x2 + v2;
            }
            if (x1 == x2) {
                return "YES";
            } else {
                return "NO";
            }
        }
    } else {
        if (x2 > x1) {
            if (v2 > v1) {
                return "NO";
            } else {
                //x2 > x1 && v2 <= v1
                while (x1 != x2 && x2 > x1) {
                    x1 = x1 + v1;
                    x2 = x2 + v2;
                }
                if (x1 == x2) {
                    return "YES";
                } else {
                    return "NO";
                }
            }
        } else {
            return "YES";
        }
    }
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}

