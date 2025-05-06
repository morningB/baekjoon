#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n =0;
    cin >> n;
    queue<int> que; // 큐

    for (int i = 0; i < n; i++)
    {
        string str; // 큐 행동을 처리할 문자열
        cin >> str; // 문자열 입력
        if (str == "push") 
        {
            int tep;
            cin >> tep; // push일 경우에만 추가 입력
            que.push(tep);
        }
        else if (str == "front")
        {
            if (que.empty()) cout << -1 << endl;
            else
            {
                cout << que.front() << endl;// 큐 front 출력
            }
        }
        else if (str == "back")
        {
            if (que.empty()) cout << -1 << endl;
            else
            {
                cout << que.back() << endl;// 큐 back 출력
            }
        }
        else if (str == "empty")
        {
            if (que.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if (str == "pop")
        {
            if (que.empty())
                cout << -1 << endl;
            else
            {
                cout << que.front() << endl;
                que.pop();
            }
            
        }
        else if (str == "size")
        {
            cout << que.size() << endl;
        }
    }
}