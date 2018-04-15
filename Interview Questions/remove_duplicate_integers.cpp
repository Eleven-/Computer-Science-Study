#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Given a vector of integer numbers
// Remove the copies
 
vector<int> formatNum(vector<int> numVec) {
    unordered_set<int> temp(numVec.begin(), numVec.end());  //creates a unordered_set w/ size of numVec
    numVec.assign(temp.begin(), temp.end());                //assigns values from numVec to temp set
    
    
    
    return numVec;
}
 
int main() {
    
    vector<int> input = {1, 2, 3, 1, 2, 3};
    vector<int> output = formatNum(input);
    
    return 0;
}
