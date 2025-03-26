#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    istringstream ss(my_string);
    string str;
    while(ss >> str){
        answer.push_back(str);
    }
    return answer;
}