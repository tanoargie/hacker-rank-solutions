#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numberOfSequences;
    int numberOfQueries;
    int queryFirstPart;
    int querySecondPart;
    int queryThirdPart;
    cin >> numberOfSequences;
    cin >> numberOfQueries;
    std::vector<std::vector<int>> seqList; 
    std::vector<int> seq;
    for (int j = 0; j < numberOfSequences; j++) {
        seqList.push_back(seq);
    }
    int lastAnswer = 0;
    for (int i = 0; i < numberOfQueries; i++) {
        cin >> queryFirstPart;
        cin >> querySecondPart;
        cin >> queryThirdPart;
        if (queryFirstPart == 1) {
            int place = (querySecondPart^lastAnswer) % numberOfSequences;
            seqList[place].push_back(queryThirdPart);
        } else if (queryFirstPart == 2) {
            int place = (querySecondPart^lastAnswer) % numberOfSequences;
            std::vector<int> seq = seqList[place];
            lastAnswer = seq[queryThirdPart % seq.size()];
            cout << lastAnswer << endl;
        }
    }
        
    
    return 0;
}

