#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    // 아아 : 4500, 라뗴 : 5000
    // 메뉴만 -> 아이스
    // 아무거나 -> 아아
    for(int i=0;i<order.size();i++){
        if(order[i].find("americano") != string::npos || order[i] == "anything")
            answer += 4500;
        else if(order[i].find("cafelatte") != string::npos)
            answer += 5000;
    }
    return answer;
}