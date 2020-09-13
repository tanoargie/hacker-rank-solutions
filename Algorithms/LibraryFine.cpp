#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int d1, m1, y1;
    cin >> d1 >> m1 >> y1;
    int d2, m2, y2;
    cin >> d2 >> m2 >> y2;

    int fine = 0;

    if (y1 > y2) {
        fine = 10000;
    } else if (m1 > m2 && y1 == y2) {
        fine = 500*(m1-m2);
    } else if (d1 > d2 && m1 == m2 && y1 == y2) {
        fine = 15*(d1-d2);
    }

    cout << fine << endl;
}
