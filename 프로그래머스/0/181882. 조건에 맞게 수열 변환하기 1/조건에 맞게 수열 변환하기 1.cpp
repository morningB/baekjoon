#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    // 50 <= arr  && 짝수-> /2
    // 50 >= arr && 홀수 => *2
    
    for(int i=0;i<arr.size();i++){
        if(arr[i] <= 50 && arr[i] %2 == 1)
            arr[i] *=2;
        else if(arr[i] >= 50 && arr[i] %2 ==0)
            arr[i] /=2;
            
    }
    return arr;
}