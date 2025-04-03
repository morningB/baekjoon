#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n,0));
    int dx[4] = {0, 1, 0, -1};  // x 증가 = 행
int dy[4] = {1, 0, -1, 0};  // y 증가 = 열
int dir = 0; // 시작: 오른쪽

    int nx = 0,ny = 0;
    int x = 0, y = 0;
    

    

    for(int i=1;i<= n * n;i++){
        answer[x][y] = i;
        nx = x + dx[dir];
        ny = y + dy[dir];

        if(0>nx  || nx >= n || 0> ny || ny >= n || answer[nx][ny] != 0){
                dir = (dir + 1)% 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
    
            }
        x = nx;
        y = ny;
    }
    return answer;
}
