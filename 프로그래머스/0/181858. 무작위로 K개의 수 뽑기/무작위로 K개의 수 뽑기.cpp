#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k) {

    vector<int> answer;
    //일정 범위 내에서 수를 뽑고, 나온적 없는 수(서로 다른 수) 배열에 추가
    // arr 에서 찾아서 뽑기/ 만약 더이상  -1 추가
    for (int i = 0;i < arr.size();i++) {
        
        
        if (find(answer.begin(),answer.end(),arr[i]) == answer.end())
            answer.push_back(arr[i]);
        if(answer.size() == k) break;
    }
    answer.resize(k,-1);


    return answer;
}