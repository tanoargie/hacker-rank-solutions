#include <map>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int res = 0;
	map<char, int> appearancesA;
	map<char, int> appearancesB;

	for (int i = 0; i < a.size(); i++) {
		appearancesA[a[i]] += 1;
	}
	for (int i = 0; i < b.size(); i++) {
		appearancesB[b[i]] += 1;
	}

	for (map<char, int>::iterator it = appearancesA.begin(); it != appearancesA.end(); ++it) {
		map<char, int>::iterator itB = appearancesB.find(it->first);
		if (itB != appearancesB.end()) {
			res += abs(int(it->second - itB->second));
			appearancesB.erase(itB);
		} else {
			res += it->second;
		}
	}

	for (map<char, int>::iterator it = appearancesB.begin(); it != appearancesB.end(); ++it) {
		res += it->second;
	}

	cout << res << endl;

	return 0;
}
