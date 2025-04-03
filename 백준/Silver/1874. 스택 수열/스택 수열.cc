#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    stack<int> st;
    int n,a,cnt = 1;
    cin >> n;
    vector<string> arr;
    
    
    // // 4 3 6 8 7 5 2 1
    // // 스택에 push할 땐 오름차순을 지킨다.
    // // 1 2 3 4 ++++
    // // 1 2 -- -> 4 3
    // // 1 2 5 6 ++ -> 4 3
    // // 1 2 5 - -> 4 3 6
    // // 1 2 5 7 8 ++ -> 4 3 6
    // // 1 2 5 7 8 ---- -> 4 3 6 7 8 5 2 1

    for(int i=0;i<n;i++){
        cin >> a;
        // 입력받은 수만큼 stack에 푸쉬 후 + 넣기
        while(cnt<=a){
            st.push(cnt);
            cnt++;
            arr.push_back("+");
        }
        // 만약 top 이 a랑 만난다면 pop 후 - 넣기 아니라면 종료
            if(st.top() == a){
                st.pop();
                arr.push_back("-");
            }
            else{
                cout << "NO";
                return 0;
            }
       
    }
    for(auto &a : arr)
        cout << a << "\n";

}