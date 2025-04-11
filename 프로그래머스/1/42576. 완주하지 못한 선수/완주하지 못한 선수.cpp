#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    // participant : 마라톤 이름 / 동명이인 가능 / 10만 이하
    // completion : 완주한 사람
    // 완주 못한사람 return
    string answer = "";
    unordered_map<string, int> m;
    // sort(participant.begin(),participant.end());
    // sort(completion.begin(), completion.end());
    // for(int i=0;i<participant.size();i++)
    // {
    //     if(participant[i] != completion[i]){
    //         return participant[i];
    //     }
    // }
    
    
    // // 서로 비교하며 찾기?
    for(int i=0;i<participant.size();i++)
    {
        if(m.end() == m.find(participant[i]))
        {
            m.insert({participant[i],1}); // 사람의 수를 넣는다.;
        }else{
            m[participant[i]]++;
        }
        
    }
    for(auto &p : completion)
    {
        m[p]--; // 완료한다면 0으로 감소
    }
    for(auto &p : participant)
    {
        if(m[p] > 0) // 1이라면 완주 x
            return p;
            
    }
    
    return answer;
}