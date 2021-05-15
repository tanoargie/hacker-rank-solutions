#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int sherlockAndAnagrams(const string sourceString) {
	int res = 0;
	map<string, int> appearances;
	for (int i = 0; i < sourceString.size(); i++) {
		for (int j = i; j < sourceString.size(); j++) {
			/* cout << i << " " << j << " " << sourceString.substr(i, j - i + 1) << endl; */
			string substring = sourceString.substr(i, j - i + 1);
			sort(substring.begin(), substring.end());
			/* cout << substringSum << endl; */
			appearances[substring] = appearances[substring] + 1;
		}
	}

	for(map<string, int>::iterator it = appearances.begin(); it != appearances.end(); ++it) {
		/* cout << it->first << " " << it->second << endl; */
		if (it->second > 1) {
			res += ( it->second*( it->second - 1 ) )/2;
		}
	}

	return res;
}

int main() {
	int numberOfStrings;
	cin >> numberOfStrings;
	vector<string> stringsToTest;

	for (int i = 0; i < numberOfStrings; i++) {
		string stringToTest;
		cin >> stringToTest;

		stringsToTest.push_back(stringToTest);
	}

	for (int i = 0; i < stringsToTest.size(); i++) {
		cout << sherlockAndAnagrams(stringsToTest[i]) << endl;
	}

	return 0;
}
