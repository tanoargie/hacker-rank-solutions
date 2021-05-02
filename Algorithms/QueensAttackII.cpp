#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <math.h>

using namespace std;

bool canGoThere(int yLocation, int xLocation, int n, set< pair < int, int > >& obstacles) {
	if (xLocation > n || yLocation > n || yLocation < 1 || xLocation < 1) {
		return false;
	}

	if (obstacles.size() == 0) {
		return true;
	}

	bool thereIsAnObstacle = false;
	set< pair < int, int > >::iterator it = obstacles.find(make_pair(yLocation, xLocation));
	if (it != obstacles.end()) {
		thereIsAnObstacle = true;
		obstacles.erase(it);
	}
	
	return !thereIsAnObstacle;
}

int main() {
	int n;
	int k;
	int rQ;
	int cQ;
	set< pair< int, int > > obstacles;
	cin >> n >> k >> rQ >> cQ;
	vector< pair< int, int > > directions;

	directions.push_back(make_pair(0, 1));
	directions.push_back(make_pair(1, 1));
	directions.push_back(make_pair(1, 0));
	directions.push_back(make_pair(1, -1));
	directions.push_back(make_pair(0, -1));
	directions.push_back(make_pair(-1, -1));
	directions.push_back(make_pair(-1, 0));
	directions.push_back(make_pair(-1, 1));

	for (int i = 0; i < k; i++) {
		int y;
		int x;
		cin >> y >> x;
		obstacles.insert(make_pair(y, x));
	}

	int numberOfPossiblesLocations = 0;
	
	// there are 8 possible directions for the queen.
	int i = 0;
	while (i < directions.size() ) {
		int yLocation = rQ + directions[i].first;
		int xLocation = cQ + directions[i].second;
		while (canGoThere(yLocation, xLocation, n, obstacles)) {
			numberOfPossiblesLocations++;
			xLocation += directions[i].second;
			yLocation += directions[i].first;
		} 
		i++;
	}

	cout << numberOfPossiblesLocations << endl;
}
