#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    // find 활용하기
    if(my_string.find(target)!=string::npos)
       return 1;
    else
    return 0;
}