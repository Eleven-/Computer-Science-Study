#include <iostream>
#include <string>

using namespace std;

//1234
//1,234
 
// 104450 -> 104,450
// 123123123 -> 123,123,123
 
// 1000000 -> 10,00,000
// 00010100
 
string formatNum(int num) {
    string comma = ",";
    
    string temp = to_string(num);
    // Determine number of characters
    int temp_size = temp.size();
    int offset = temp_size % 3;
    
    // mod 3 number of characters to get number of ,
    for(int i = 0; i < temp_size/3; i++){
        temp.insert(i*4+offset,comma);
    }
    
    // every three characters insert a ","
    return temp;
}
 
int main() {
    string res;
    int _num;
    cin >> _num;
     
    res = formatNum(_num);
    cout << res;
     
    return 0;
}

