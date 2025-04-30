#include <iostream>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    // 서로 다른 나머지의 개수
    // 10개 입력은 고정
    // set을 사용해보자
    set<int> s;

    for(int i=0; i<10; i++)
    {
        int tem;
        cin >> tem;
        int r = tem%42;
        s.insert(r);
    }
    cout << s.size();
}