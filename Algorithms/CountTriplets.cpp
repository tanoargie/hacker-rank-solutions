#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	long arraySize;
	double r;
	cin >> arraySize >> r;
	unordered_map<double, long> appearancesRight;
	unordered_map<double, long> appearancesLeft;
	long counts = 0;
	vector<long> array;
	for (long i = 0; i < arraySize; i++) {
		long number;
		cin >> number;
		array.push_back(number);
		appearancesRight[number]++; 
	}

	for (long i = 0; i < array.size(); i++) {
		appearancesRight[array[i]]--;

		counts += appearancesRight[array[i]*r] * appearancesLeft[array[i]/r];

		appearancesLeft[array[i]]++;
		//cout << appearancesRight[array[i]] << " " << appearancesLeft[array[i]] << endl;
	}

	cout << counts << endl;

	return 0;
}
