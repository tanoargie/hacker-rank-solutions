#include <vector>
#include <iostream>

using namespace std;

void swap(int a, int b, vector<int>& array) {
	int tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
}

int main() {
	int size;
	cin >> size;
	vector<int> array;
	int number;
	for (int i = 0; i < size; i++) {
		cin >> number;
		array.push_back(number);
	}

	int swaps = 0;
	for (int i = 0; i < size; i++) {
    		for (int j = 0; j < size - 1; j++) {
        	// Swap adjacent elements if they are in decreasing order
        		if (array[j] > array[j + 1]) {
            			swap(j, j + 1, array);
				swaps++;
        		}
    		}
	}

	cout << "Array is sorted in " << swaps << " swaps." << endl;
	cout << "First Element: " << array[0] << endl;
	cout << "Last Element: " << array[array.size() - 1] << endl;

	return 0;
}
