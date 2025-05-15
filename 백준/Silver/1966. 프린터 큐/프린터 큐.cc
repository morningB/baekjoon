#include <iostream>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    int a;
    cin >> a;

    for(int i = 0; i<a; i++)
    {
        deque<pair<int,int>> dq;
        
        int n,m;
        cin >> n >> m;
        int rec = 0;
        for(int j=0;j<n;j++)
        {
            int temp; cin >> temp;
            dq.push_back({j,temp}); // 인덱스와 해당하는 우선순위
        }

        while(1)
        {
            int maxDq = 0; // 우선순위를 저장할 변수
            for(int i=0;i<dq.size();i++) 
            {
                int fir = dq.front().first; // 제일 앞에있는 값의 인덱스
                int sec = dq.front().second;// 제일 앞에있는 값의 우선순위

                maxDq = max(maxDq,sec); // 우선순위 비교
                dq.pop_front();         // 제일 높은 수가 올때까지 뒤로 이동
                dq.push_back({fir,sec}); 
            }
            // int fir = dq.front().first; // 제일 우선순위 높은 수의 인덱스
            // int sec = dq.front().second; // 우선순위
            if(dq.front().second != maxDq) 
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                if(dq.front().first == m) break;
                else
                {
                    dq.pop_front();
                    rec++;
                }
            }
        }
        cout << rec+1 << endl;
               
    }
    
}