#include <string>
#include <vector>
#include <math.h>
using namespace std;
bool recu(int a){
    if(a == 1) return true;
    else if(a % 2 != 0 || a == 0) 
        return false;
    
    return recu(a/2);
    
}
vector<int> solution(vector<int> arr) {
    vector<int> answer;
    // arr의 길이가 2의 제곱이 되도록 함.
    // 부족한 길이는 0으로 맞춰줌
   
   while(1){
    if(!recu(arr.size())){
            arr.push_back(0);
        }
    else
        break;
   }
    
        
  
    
    return arr;
}