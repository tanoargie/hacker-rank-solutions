#include <string>
#include <map>
#include <set>
#include <iostream>
#include <cmath>

using namespace std;

bool inAMapOf2existsSetWithOne(map<int, set< char > >& charsByOccurrences) {
    bool res = false;
    for (map<int, set< char > >::iterator it = charsByOccurrences.begin(); !res && it != charsByOccurrences.end(); ++it) {
        if (( it->second.size() == 1 && charsByOccurrences.find(it->first - 1) != charsByOccurrences.end() ) || (it->first == 1 && it->second.size() == 1)) {
            res = true;
        }
    }

    return res;
}

int main() {
    string inputString;
    cin >> inputString;
    map<char, int> occurrences;
    map<int, set< char > > charsByOccurrences;
    for (int i = 0; i < inputString.size(); ++i) {
        occurrences[inputString[i]] += 1;
    }
    for (map<char, int>::iterator it = occurrences.begin(); it != occurrences.end(); ++it) {
        charsByOccurrences[it->second].insert(it->first);
    }

    /* for (map<int, set< char > >::iterator it = charsByOccurrences.begin(); it != charsByOccurrences.end(); ++it) { */
    /*     cout << it->second.size() << endl; */
    /* } */

    if (charsByOccurrences.size() == 1) {
        cout << "YES" << endl;
    } else if (charsByOccurrences.size() == 2 && inAMapOf2existsSetWithOne(charsByOccurrences)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
