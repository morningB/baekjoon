#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    // if i < size() 
    // if answer.empty() -> answer.push_back();
    // answer[answer.size()-1] == arr[i] -> 제거
    // else answer.push_back();
    
    for(int i=0;i<arr.size();i++){
        if(answer.empty())
            answer.push_back(arr[i]);
        else{
            if(answer[answer.size()-1] == arr[i])
                answer.pop_back();
            else{
                answer.push_back(arr[i]);
            }
        }
    }
    if(answer.empty())
        return {-1};
    else
        return answer;
    
}