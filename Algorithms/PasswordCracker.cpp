#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

map<string, bool> memoization;

bool matchCandidate( string candidate, string loginAttempt ) {
    if ( candidate.compare( loginAttempt.substr( 0, candidate.size() ) ) == 0 ) {
        return true;
    } else {
        return false;
    }
}

bool crackedPassword( const vector<string>& userPasswords, string loginAttempt, vector<string>& result ) {
    if ( loginAttempt.size() == 0 ) {
        return true;
    }
    if ( memoization[ loginAttempt ] ) {
        return false;
    }
    for ( int i = 0; i < userPasswords.size(); i++ ) {
        string candidate = userPasswords[i];
        // cout << "candidate: " << candidate << endl;
        if ( matchCandidate( candidate, loginAttempt ) ) {
            result.push_back( candidate );
            memoization[ loginAttempt ] = true;
            if ( crackedPassword( userPasswords, loginAttempt.substr( candidate.size() ), result ) ) {
                return true;
            }
            result.pop_back();
        }
    }
    return false;
}

void algorithm( const vector<string>& userPasswords, string loginAttempt ) {
    vector<string> result;
    memoization.clear();
    crackedPassword( userPasswords, loginAttempt, result );
    // cout << "LA: " << loginAttempt << endl;
    // cout << "result: ";
    // for ( int j = 0; j < result.size(); j++ ) { cout << result[j] << " "; }
    // cout << endl;

    if ( result.size() > 0 ) {
        for ( int i = 0; i < result.size(); i++ ) {
            if ( i == result.size() - 1 ) {
                cout << result[i];
            } else {
                cout << result[i] << " ";
            }
        }
        cout << endl;
    } else {
        cout << "WRONG PASSWORD" << endl;
    }
}

int main() {
    int numberOfTests;
    cin >> numberOfTests;
    for ( int i = 0; i < numberOfTests; i++ ) {
        int numberUserPasswords;
        cin >> numberUserPasswords;
        vector<string> userPasswords( numberUserPasswords );
        for ( auto &it : userPasswords ) {
            cin >> it;
        }
        string loginAttempt;
        cin >> loginAttempt;
        algorithm( userPasswords, loginAttempt );
    }
    return 0;
}