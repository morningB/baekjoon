#include <iostream>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0;i < a;i++)
    {
        int n, m;
        int cnt = 1;

        deque<pair<int, int>> dq;
        cin >> n >> m;

        for (int j = 0;j < n;j++)
        {
            int tem;
            cin >> tem;
            dq.push_back({ j,tem });
        }
        while (1)
        {
            int maxDq = 0;

            for (int j = 0;j < dq.size();j++)
            {
                if (maxDq < dq.front().second)
                {
                    maxDq = dq.front().second;
                    
                }
                dq.push_back({ dq.front().first, dq.front().second });
                dq.pop_front();
            }

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
                    cnt++;
                }
            }

        }

        cout << cnt << endl;
    }
}
