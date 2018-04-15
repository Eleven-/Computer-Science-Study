#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Given a vector of integer numbers
// Remove the copies
 
vector<int> formatNum(vector<int> numVec) {
    unordered_map<int, int> numMap;
    
    //add numbers to hashmap?
    for(<vector>iterator it=numVec.begin(), it<numVec.end(), it++){
        numMap.insert(*it);
        cout << *it << endl;
    }
    
    return numVec;
}
 
int main() {
    
    vector<int> input = {1, 2, 3, 1, 2, 3};
    vector<int> output = formatNum(input);
    
    return 0;
}


