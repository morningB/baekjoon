#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int ch = 0;
    ch = myString.rfind(pat);
 
    answer = myString.substr(0, ch + pat.size());

    return answer;
}