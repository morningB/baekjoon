#include <vector>
#include <iostream>
#include <stack>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    //stack<int> sta;

    for (int i = 0;i < arr.size();i++) {
        if (answer.empty())
            answer.push_back(arr[i]);
        if (answer[answer.size()-1] != arr[i])
            answer.push_back(arr[i]);
    }
    
    return answer;
}