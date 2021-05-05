#include <iostream>
#include <vector>
#include <utility>
#include <map>

using namespace std;

int minSwaps(vector< int >& array) {
	int numberOfSwaps = 0;
	map< int, int > swaps;
	for (int i = 0; i < array.size(); i++) {
		if (array[i] - 1 != i) {
			swaps[i] = array[i] - 1;
		} 
	}

	while (!swaps.empty()) {
		map< int, int >::iterator element = swaps.begin();
		int beginCycle = element->first;
		int endCycle = element->second;
		while (beginCycle != endCycle) {
			//cout << beginCycle << endCycle << endl;
			swaps.erase(element);
			element = swaps.find(endCycle);
			endCycle = element->second;
			numberOfSwaps++;
		}
		swaps.erase(element);
	}

	return numberOfSwaps;
}

int main() {
	int n;
	cin >> n;
	vector< int > array;
	int element;
	for (int i = 0; i < n; i++) {
		cin >> element;
		array.push_back(element);
	}

	cout << minSwaps(array) << endl;

	return 0;
}
