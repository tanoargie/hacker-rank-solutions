#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int numberOfTestCases;
	cin >> numberOfTestCases;
	vector<int> res;

	string word;
	for (int i = 0; i < numberOfTestCases; i++) {
		cin >> word;
		if (word.size() == 1) {
			res.push_back(0);
		} else {
			int partialRes = 0;
			for (int j = 0; j < word.size() - 1; j++) {
				if (word[j] == word[j + 1]) {
					partialRes++;
				}
			}
			res.push_back(partialRes);
		}
	}

	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}

	return 0;
}
