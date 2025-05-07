#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    // 1 2 3 4 5 6 7
    // 1 2 4 5 6 7
    // 1 2 4 5 7
    // 1 4 5 7
    // 1 4 5 ...

    int n,k;
  
    cin >> n >> k;

    queue<int> que;
    vector<int> arr;

    for(int i=0;i<n;i++)
        que.push(i+1);

    
    while(!que.empty())
    {
        
        for(int i=1; i<k;i++)
        {
            que.push(que.front());
            que.pop();
        }
        arr.push_back(que.front());
        que.pop();
                
    }


    // 출력 양식에 맞추기
    cout << "<";

    for(int i=0;i<arr.size()-1;i++)
        cout<< arr[i] <<", ";

    cout << arr[arr.size()-1]<<">";
}