#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    istringstream ss(myString);
    string token;
    while(getline(ss,token,'x')){
        if(!token.empty())
        answer.push_back(token);
    }
    sort(answer.begin(),answer.end());
    
    return answer;
}