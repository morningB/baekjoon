#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    // 짝수라면 /2 홀수 -1 /2
    // cnt++ 후 모든 원소 cnt 출력
    
    for(int i=0;i<num_list.size();i++){
        int temp = num_list[i];
        while(temp != 1){
            if(temp %2 == 0)
                temp /=2;
            else
                temp = (temp-1)/2;
            
            answer++;
        }
    }
    return answer;
}