#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int n, m;
int arr[101][101];
bool visited[101][101] = { false, };
deque<pair<int, int>> dq;

int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };

int result = 0;

void bfs()
{
    while (!dq.empty())
    {
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();

        for (int i = 0;i < 4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < n && 0 <= ny && ny < m)
            {
                if (arr[nx][ny] == 1 && !visited[nx][ny])
                {
                    visited[nx][ny] = true;
                    arr[nx][ny] += arr[x][y];
                    dq.push_back({ nx,ny });
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); // C++ 스트림과 C 스트림의 동기화 비활성화
    cin.tie(NULL); // cin과 cout의 묶음(tie) 해제
    cin >> n >> m;
    string line; // 한 줄씩 입력받는 변수
    cin.ignore(); // 개행문자 제거

    for (int i = 0;i < n;i++)
    {
        getline(cin, line); // 한줄 입력 받기
        for (int j = 0;j < m;j++)
            arr[i][j] = line[j] - '0'; // int형으로 변환
    }

    dq.push_back({ 0,0 });
    visited[0][0] = true;

    bfs();

    cout << arr[n - 1][m - 1];
}
