#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int dx[] = {0,1,0,-1,-1,-1,1,1};
int dy[] = { 1,0,-1,0,-1,1,-1,1 };
int arr[50][50] = { 0, };
bool visited[50][50] = { false, };
deque<pair<int, int>> dq;
int m, n;

void bfs(int x, int y)
{
	while (!dq.empty())
	{
		int x = dq.front().first;
		int y = dq.front().second;
		dq.pop_front();

		for (int i = 0;i < 8;i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && nx < m && 0 <= ny && ny < n)
			{
				if (!visited[nx][ny] && arr[nx][ny] == 1)
				{
					visited[nx][ny] = true;
					dq.push_back({ nx,ny });
				}
			}
		}
	}
}
int main()
{
	while (1)
	{
		for (int i = 0;i < m;i++)
		{
			for (int j = 0;j < n;j++)
			{
				arr[i][j] = 0;
				visited[i][j] = false;
				
				if(!dq.empty())
					dq.pop_back();
			}
		}
		
		int cnt = 0;
		
		cin >> n >> m;
		cin.ignore();

		if (n == 0 && m == 0)
			break;
		else
		{
			for (int i = 0;i < m;i++)
			{
				for (int j = 0;j < n;j++)
				{
					cin >> arr[i][j];
				}
			}
				
			cin.ignore();
			for (int i = 0;i < m;i++)
			{
				for (int j = 0;j < n;j++)
				{
					if (arr[i][j] == 1 && !visited[i][j])
					{
						dq.push_back({ i,j });
						visited[i][j] = true;
						bfs(i, j);
						cnt++;
					}
				}
			}
			
			cout << cnt << endl;
		}
	}
}
