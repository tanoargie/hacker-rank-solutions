#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int numberOfToys;
	int budget;
	vector<int> toyPrices;

	cin >> numberOfToys >> budget;
	int toyPrice;
	for (int i = 0; i < numberOfToys; i++) {
		cin >> toyPrice;
		toyPrices.push_back(toyPrice);
	}

	sort(toyPrices.begin(), toyPrices.end());
	int res = 0;
	for (int i = 0; i < toyPrices.size() && budget > 0; i++) {
		budget -= toyPrices[i];
		if (budget > 0) {
			res++;
		}
	}
	cout << res << endl;
	return 0;
}
