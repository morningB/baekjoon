#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for(int i=0;i<flag.size();i++){
        if(flag[i] == true){
            for(int j=0;j<arr[i] * 2;j++)
                answer.push_back(arr[i]);
            
        }else{
            answer.erase(answer.begin()+answer.size()-arr[i],answer.end());
        }
    }
    return answer;
}