#include <vector>
#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <algorithm>    // std::max

using namespace std;

class testCase {
	public:
		testCase(int numberOfPeople, vector< int > line);
		int numberOfBribes();
	private:
		int numberOfPeople;
		vector< int > line;
};

testCase::testCase(int numberOfPeople, const vector< int > line) {
	this->numberOfPeople = numberOfPeople;
	this->line = line;
} 

int testCase::numberOfBribes() {
	int sum = 0;
	for (int i = 0; i < this->line.size(); i++) {
		int diff = this->line[i] - (i + 1);
		if (diff > 2) {
			return -1;
		}
		for (int j = max(0, this->line[i] - 2); j < i; j++) {
			if (this->line[j] > this->line[i]) {
				sum++;
			}
		}	
	}

	return sum;
};

int main() {
	int numberOfTestCases;
	cin >> numberOfTestCases;
	vector< testCase* > testCases;
	for (int i = 0; i < numberOfTestCases; i++) {
		int n;
		cin >> n;
		vector< int > line;
		int personSticker;
		for (int j = 0; j < n; j++) {
			cin >> personSticker;
			line.push_back(personSticker);
		}
		testCase* newTestCase = new testCase(n, line);
		testCases.push_back(newTestCase);
	}

	for (int i = 0; i < testCases.size(); i++) {
		int numberOfBribes = testCases[i]->numberOfBribes();
		if (numberOfBribes < 0) {
			cout << "Too chaotic" << endl;
		} else {
			cout << numberOfBribes << endl;
		}
	}
	return 0;
}
