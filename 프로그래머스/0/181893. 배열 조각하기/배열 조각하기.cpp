#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    // 짝수 i 에서 arr[q[i]]의 뒷부분을 버린다.
    // 홀수 i에서 arr[q[i]]의 앞부분을 버린다.
    for(int i=0;i<query.size();i++){
   
            if(i % 2 ==0){
            arr.erase(arr.begin()+query[i]+1,arr.end());
        }else if(i % 2 !=0){
            arr.erase(arr.begin(),arr.begin() + query[i]);
        }
        
        
    }
    return arr;
}