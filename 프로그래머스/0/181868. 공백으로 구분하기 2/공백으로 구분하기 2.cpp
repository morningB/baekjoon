#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    istringstream ss(my_string);
    string token;
    while(ss >> token){
        answer.push_back(token);
    }
    
    return answer;
}