#include <map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string twoStrings(const string first, const string second) {
	string res = "NO";
	map<char, int> firstAppearance;

	for (int i = 0; i < first.size(); i++) {
		firstAppearance[first[i]] += 1;
	}

	for (int i = 0; i < second.size(); i++) {
		if (firstAppearance[second[i]] > 0) {
			return "YES";
		}
	}

	return res;
}

int main() {
	int numberOfPairs;
	cin >> numberOfPairs;
	vector < pair < string, string > > cases;

	for (int i = 0; i < numberOfPairs; i++) {
		string first;
		string second;
		cin >> first >> second;
		pair< string, string> indCase = make_pair(first, second);
		cases.push_back(indCase);
	}

	for (int i = 0; i < cases.size(); i++) {
		string res = twoStrings(cases[i].first, cases[i].second);
		cout << res << endl;
	}

	return 0;
}
