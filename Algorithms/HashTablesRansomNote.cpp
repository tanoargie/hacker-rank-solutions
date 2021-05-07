#include <map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string canIDrawWithMagazine(const vector< string >& note, map< string, int >& magazine) {
	string res = "Yes";

	for (int i = 0; res == "Yes" && i < note.size(); i++) {
		if (magazine[note[i]] > 0) {
			magazine[note[i]] = magazine[note[i]] - 1;
		} else {
			res = "No";
		}
	}

	return res;
}

int main() {
	int m, n;
	cin >> m >> n;
	map< string, int > magazine;
	string word;
	for (int i = 0; i < m; i++) {
		cin >> word;
		if (magazine[word]) {
			magazine[word] = magazine[word] + 1;
		} else {
			magazine[word] = 1;
		}
	}

	vector< string > note;
	for (int i = 0; i < n; i++) {
		cin >> word;
		note.push_back(word);
	}

	string res = canIDrawWithMagazine(note, magazine);

	cout << res << endl;

	return 0;
}
