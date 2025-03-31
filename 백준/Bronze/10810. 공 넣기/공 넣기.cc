#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    // 처음 5 4 입력
    cin >> n >> m;
    // 먼저 arr을 초기화
    vector<int> arr(n+1, 0);

    for (int i = 0;i < m;i++) {
        // 2번째 줄부터 입력
        int a, b, c;
        cin >> a >> b >> c;
        // a~b까지 c번째(인덱스+1)에 공을 넣는다.
        for (int j = a;j <= b;j++) {
            /*if (arr[j] != 0)
                arr[j] = 0;
            else {
                
            }*/
            arr[j] = c;
        }
            
    }

    for (int i = 1;i < arr.size();i++)
        cout << arr[i] << " ";
}