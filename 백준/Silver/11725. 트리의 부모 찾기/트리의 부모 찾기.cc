#include <iostream>
#include <queue>
#include <vector>

using namespace std;
#define MAX 100001

vector<int> arr[MAX];
int value[MAX];
bool visited[MAX];

void dfs(int root);
void bfs(int root);

int main() {
    ios_base::sync_with_stdio(false); // C++ 스트림과 C 스트림의 동기화 비활성화
    cin.tie(NULL); // cin과 cout의 묶음(tie) 해제

    int n;
    cin >> n; // 노드의 개수
    for(int i=0;i<n - 1;i++) // 간선의 개수
    {
        int a,b;
        cin >> a>>b;

        // 서로 이어줌 why? -> 양방향 그래프이기 때문에
        arr[a].push_back(b); 
        arr[b].push_back(a);
    }

    dfs(1);
    for(int i =2;i<=n;i++)
        cout << value[i] << "\n";
    
}

// DFS 버전
void dfs(int root)
{
    visited[root] = true;
    for(int i=0;i<arr[root].size();i++)
    {
        int w = arr[root][i];
        if(!visited[w])
        {
            value[w] = root;
            dfs(w);
        }
    }
}

// BFS 버전
void bfs(int root)
{
    queue<int> q;
    q.push(root);
    visited[root] = true;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        
        for(int i=0; i<arr[x].size();i++)
        {
            int y = arr[x][i];
            if(!visited[arr[x][i]])
            {
                value[arr[x][i]] = x;
                q.push(arr[x][i]);
                visited[arr[x][i]] = true;
            }
        }
    }
}
