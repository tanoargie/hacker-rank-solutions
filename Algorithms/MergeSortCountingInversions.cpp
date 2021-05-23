#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

void TopDownSplitMerge(vector<long>& copyVector, long begin, long end, vector<long>& unsorted, long& res) {
	if (end - begin <= 1) return;
	long middle = floor( ( begin + end ) / 2 );
	/* cout << middle << " " << end << " " << begin << endl; */
	TopDownSplitMerge(unsorted, begin, middle, copyVector, res);
	TopDownSplitMerge(unsorted, middle, end, copyVector, res);
	long i = begin;
	long j = middle;
	for (long k = begin; k < end; k++) {
		if (j < end && ( i >= middle || copyVector[j] < copyVector[i] )) {
			if (copyVector[j] < copyVector[i]) res += middle - i;
			unsorted[k] = copyVector[j];
			j++;
		} else {
			unsorted[k] = copyVector[i];
			i++;
		}
	}
	/* for (int i = 0; i < copyVector.size(); i++) { */
	/* 	cout << copyVector[i] << " "; */
	/* } */
	/* cout << "begin: " << begin << " end: " << end; */
	/* cout << endl; */
}

long MergeSortCountingInversions(vector<long>& unsorted) {
	long res = 0;
	vector<long> copyVector(unsorted);
	TopDownSplitMerge(copyVector, 0, copyVector.size(), unsorted, res);

	/* for (long i = 0; i < copyVector.size(); i++) { */
	/* 	cout << copyVector[i] << " "; */
	/* } */
	/* cout << endl; */

	return res;
}

int main() {
	long datasets, sizeDataSet;
	cin >> datasets;
	vector<long> res;
	for (long i = 0; i < datasets; i++) {
		cin >> sizeDataSet;
		vector<long> array;
		long number;
		for (long j = 0; j < sizeDataSet; j++) {
			cin >> number;
			array.push_back(number);
		}
		res.push_back(MergeSortCountingInversions(array));
	}

	for (long i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	return 0;
}
