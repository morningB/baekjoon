#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int n;
    vector<int> arr;
    int cnt = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        int b;
        bool ch = false;
        cin >> b;
        if(b == 2)
            cnt++;
        for(int j=2;j<b;j++){ // 0,1은 제외
            if(b%j == 0){
                ch = false;
                break;
            }
            ch = true;
        }
        if(ch)
            cnt++;
    }
    cout << cnt;

}
