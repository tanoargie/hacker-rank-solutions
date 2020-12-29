#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void getWaysToReachChange( const vector<int>& coins, vector<long>& ways ) {
    for ( int i = 0; i < coins.size(); i++ ) {
        for ( int j = 0; j < ways.size(); j++ ) {
            if ( j >= coins[ i ] ) {
                ways[ j ] = ways[ j ] + ways[ j - coins[ i ] ];
            }
        }
    }
}

int main() {
    int changeToReach;
    int numberOfCoins;
    vector<int> coins;
    int currentCoin;
    cin >> changeToReach >> numberOfCoins;
    for ( int i = 0; i < numberOfCoins; i++ ) {
        cin >> currentCoin;
        coins.push_back( currentCoin );
    }
    sort( coins.begin(), coins.end() );
    vector<long> ways( changeToReach + 1, 0 );
    ways[ 0 ] = 1;
    getWaysToReachChange( coins, ways );
    cout << ways[ changeToReach ] << endl;
    return 0;
}