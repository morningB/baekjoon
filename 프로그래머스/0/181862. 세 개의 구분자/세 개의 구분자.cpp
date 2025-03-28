#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    string temp = "";
    // a,b,c 로 구분하여 문자열 나눈다. -> 공백으로 추가 후 공백을 분리
    // absadfaasvvcacscascccss 
    // -> "s", "df", "svv", "s","s","ss" 이다.
    // 
    for (int i = 0;i < myStr.size();i++) {
        if (myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c')
            temp += " ";
        else
            temp += myStr[i];
    }
    istringstream ss(temp);
    string token;
    while (getline(ss, token, ' ')) {
        if(token.empty())
            continue;
        else
            answer.push_back(token);
        
    }
    if(answer.empty())
        return {"EMPTY"};
    else
        return answer;
}