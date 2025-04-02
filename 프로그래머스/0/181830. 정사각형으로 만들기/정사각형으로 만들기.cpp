#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<vector<int> > solution(vector<vector<int> > arr) {
    
    
    int n1  = max(arr.size(),arr[0].size());
    // 새로운 배열을 추가하고 최대 크기로 확장하여 초기화 한다.
    vector<vector<int> > answer(n1,vector<int>(n1,0));
    
    //행만큼 반복
    for(int i=0;i<arr.size();i++){
               
           for(int j=0;j<arr[i].size();j++){
                    
                    answer[i][j] = arr[i][j];
                }
            
                

       
    }
    
    return answer;
}