#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0,a2 = 0;
    // i = 0 이 1번
    for(int i=0;i<num_list.size();i++){
        if(i%2 == 0)
            answer += num_list[i];
        else
            a2 += num_list[i];
    }
    return answer > a2 ? answer : a2;
}