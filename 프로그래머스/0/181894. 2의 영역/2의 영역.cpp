#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> n;  
    int start = 0, end = 0;
    for (int i = 0;i < arr.size();i++) {
        if (arr[i] == 2)
            n.push_back(i);
    }
    if(n.size() == 0){
        answer.push_back(-1);
        return answer;
    }
    start = *min_element(n.begin(),n.end());
    end = *max_element(n.begin(), n.end());
    
    for (int i = start;i <= end; i++) {
        answer.push_back(arr[i]);
    }
    return answer;
}