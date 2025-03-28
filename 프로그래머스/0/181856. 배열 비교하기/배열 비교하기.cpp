#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int sum1 =0,sum2 = 0;
    int n1 = arr1.size(), n2 = arr2.size();
    
    
    if(n1 > n2) return 1;
    else if( n1 < n2) return -1;
    else if (n1 == n2){
        for(int i=0;i<n1;i++){
            sum1 += arr1[i];
        }
    for(int i=0;i<n2;i++){
            sum2 += arr2[i];
        }
        if(sum1 > sum2)
            return 1;
        else if(sum1 < sum2)
            return -1;
        else
            return 0;
        
    }
    return answer;
}