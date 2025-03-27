#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;
vector<int> solution(string myString) {
    vector<int> answer;
    if (myString[myString.size() - 1] == 'x') myString += 'x';
    istringstream ss(myString);
    string token;
    int temp = 0;
    while(getline(ss,token,'x')){
        answer.push_back(token.size());
        
    }
    return answer;
}