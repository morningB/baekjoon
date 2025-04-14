#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int n = nums.size() / 2;
    unordered_set<int> se;
  
    for(int i=0;i<nums.size();i++)
    {
        // 인덱스와 폰켓몬
        se.insert(nums[i]);
        
    }
    // answer = max(answer, 개수); 를 해서 최대값 저장.
    // nums.size() / 2 만큼만 골라야됨.
    if(nums.size()/2 < se.size()){
        answer = nums.size()/2;
    }else{
        answer = se.size();
    }
    

    return answer;
}