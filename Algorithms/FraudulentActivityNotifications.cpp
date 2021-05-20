#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int n, d, expenditure;
	vector<int> expenditures, trackForMedian;

	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> expenditure;
		if (i < d) {
			trackForMedian.push_back(expenditure);
		}
		expenditures.push_back(expenditure);
	}
	sort(trackForMedian.begin(), trackForMedian.end());
	int res = 0;
	/* for (int i = 0; i < trackForMedian.size(); i++) { */
	/* 	cout << trackForMedian[i] << endl; */
	/* } */
	/* for (int i = 0; i < expenditures.size(); i++) { */
	/* 	cout << expenditures[i] << endl; */
	/* } */
	bool isEvenSize = trackForMedian.size() % 2 == 0;
	for (int i = d; i < n; i++) {
		double median = isEvenSize ? (double)( trackForMedian[trackForMedian.size() / 2] + trackForMedian[( trackForMedian.size() / 2 ) - 1] ) / 2 : trackForMedian[floor(trackForMedian.size() / 2)];
		/* cout << isEvenSize << expenditures[i] << " " << median << endl; */
		if (expenditures[i] >= median * 2) {
			res++;
		}
		int newElement = expenditures[i];
		int removedElement = expenditures[i - d];
		/* vector<int>::iterator it = trackForMedian.begin(); */
		/* while (it != trackForMedian.end()) { */
		/* 	if (*it == removedElement) { */
		/* 		it = trackForMedian.erase(it); */
		/* 	} else if (*it > newElement) { */
		/* 		it = trackForMedian.insert(it, newElement); */
		/* 	} else { */
		/* 		++it; */
		/* 	} */
		/* } */
		int rightInsert = trackForMedian.size() - 1;
		int leftInsert = 0;
		bool foundInsert = false;
		while (leftInsert + 1 < rightInsert && !foundInsert) {
			int mid = (leftInsert + rightInsert) / 2;
			/* cout << trackForMedian[mid] << endl; */
			if (trackForMedian[mid] > newElement) {
				rightInsert = mid;
			} else if (trackForMedian[mid] < newElement) {
				leftInsert = mid;
			} else {
				foundInsert = true;
				trackForMedian.insert(trackForMedian.begin() + mid, newElement);
			}
		}
		if (!foundInsert) {
			if (trackForMedian[rightInsert] > newElement) {
				trackForMedian.insert(trackForMedian.begin() + rightInsert, newElement);
			} else {
				trackForMedian.insert(trackForMedian.begin() + rightInsert + 1, newElement);
			}
		}
		int rightErase = trackForMedian.size() - 1;
		int leftErase = 0;
		bool foundErase = false;
		while (leftErase + 1 < rightErase && !foundErase) {
			int mid = (leftErase + rightErase) / 2;
			if (trackForMedian[mid] > removedElement) {
				rightErase = mid;
			} else if (trackForMedian[mid] < removedElement) {
				leftErase = mid;
			} else {
				foundErase = true;
				trackForMedian.erase(trackForMedian.begin() + mid);
			}
		}
	}

	cout << res << endl;

	return 0;
}
