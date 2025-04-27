#include "iostream"
#include "string"
#include "vector"
#include "stack"
using namespace std;

int main()
{
    int n; // 반복 횟수
    vector<int> arr; // 담는 배열
    int cnt = 1; // 보이는 탑(1이 시작인 이유는 처음 자신의 탑은 무조건 보이니까)
     
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int last_top = arr[arr.size() - 1];
    for (int i = arr.size() - 2;i >= 0;i--)
    {
        if (last_top < arr[i])
        {
            cnt++;
            last_top = arr[i];
        }
    }
    cout << cnt;
}