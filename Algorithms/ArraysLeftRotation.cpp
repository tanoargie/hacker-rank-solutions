#include <bits/stdc++.h>
#include <iostream>
#include <queue>          // std::queue

using namespace std;

void leftRotations(queue< int >& queue, int rotation) {
	for (int i = 0; i < rotation; i++) {
		int poppedElement = queue.front();
		queue.pop();
		queue.push(poppedElement);
	}
}

int main() {
	int n;
	int d;
	queue< int > queue;
	cin >> n;
	cin >> d;
	int element;
	for (int i = 0; i < n; i++) {
		cin >> element;
		queue.push(element);
	}

	leftRotations(queue, d);

	while (!queue.empty()) {
		cout << queue.front() << " ";
		queue.pop();
	}
	cout << endl;

	return 0;
}
