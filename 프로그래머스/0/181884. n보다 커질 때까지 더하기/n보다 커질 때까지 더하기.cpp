#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    // n보다 커지는 순간의 값을 출력
    for(int i=0;i<numbers.size();i++){
        if(answer > n ){
            return answer;
            break;
        }
        answer += numbers[i];
    }
    return answer;
}