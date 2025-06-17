#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int arr[501][501];
bool visited[501][501] = {false,};
deque<pair<int, int>> dq;

int nx[4] = { 1,0,-1,0 };
int ny[4] = { 0,1,0,-1 };
int n, m;


int bfs(int a, int b)
{
    int result = 1;
    dq.push_back({ a,b });

    while (!dq.empty())
    {
        int x = dq.front().first;
        int y = dq.front().second;

        dq.pop_front();

        for (int i = 0;i < 4;i++)
        {
            int dx = x + nx[i];
            int dy = y + ny[i];
            if (0 <= dx && dx < n && 0 <= dy && dy < m)
            {
                if (arr[dx][dy] == 1 && visited[dx][dy] == false)
                {
                    result++;
                    visited[dx][dy] = true;
                    dq.push_back({ dx,dy });
                }
            }
        }

    }
    return result;

}

int main() {
    ios_base::sync_with_stdio(false); // C++ 스트림과 C 스트림의 동기화 비활성화
    cin.tie(NULL); // cin과 cout의 묶음(tie) 해제

    int count = 0;
    int size = 0;

    cin >> n >> m;

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            if (!visited[i][j] && arr[i][j] == 1)
            {
                visited[i][j] = true;

                count++;
                size = max(size, bfs(i, j));
            }
        }
    }

    cout << count << endl;
    cout << size << endl;
}
