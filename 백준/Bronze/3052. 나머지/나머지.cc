#include <iostream>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    // 서로 다른 나머지의 개수
    // 10개 입력은 고정
    // 배열을 사용해보자
    // 배열을 사용했을 때
    // 1. 일단 넣는다.
    // 배열 안에 같은 값이 있다면 제거
    // 같은 요소를 체크하기 위한 check 변수
    // 배열의 사이즈 출력
    vector<int> arr;

    for(int i=0; i<10; i++)
    {
        int tem;
        cin >> tem;
        bool check = false;
        int j = 0;
        int r = tem%42;
        arr.push_back(r); 

        for(j=0;j<arr.size()-1;j++)
        {
            if(r == arr[j] && !arr.empty())
            {
                check = true;
                break;
            }
            else
            {

            }
        }
        if(check)
        {
            arr.erase(arr.begin() + j);
        }
        
    }
    cout << arr.size();
    
}