#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    //arr.size() %2 == 1 -> i%2 ==0 -> arr[i]+n;
    //arr.size() %2 == 0 -> i%2 ==1 -> arr[i]+n;
    if(arr.size() %2 == 1){
        for(int i=0;i<arr.size();i+=2){
            arr[i] +=n;
        }
    }else{
        for(int i=1;i<arr.size();i+=2){
            arr[i] +=n;
        }
    }
    
   
    return arr;
}