#include <iostream>
#include <list>

using namespace std;

int main() {

    // 커서 : 앞 뒤 중간에 존재
    //문자 길이 L이라면 L+1까지 갈 수 있음
    // L: 왼쪽(맨앞이라면 무시) / D 오른쪽 이동 / B 왼쪽 문자 삭제 (커서 위치 그대로) / P $ : "$"라는 문자 왼쪽에 추가 ->

    
    string n;
    cin >> n;
    list<char> arr(n.begin(),n.end());
    
    int m;
    cin >> m;

    auto cursor = arr.end();

    for (int i = 0;i < m;i++)
    {
        char ch;
        cin >> ch;
        if (ch == 'P')
        {
            char ch;
            cin >> ch;
            arr.insert(cursor, ch);
            
        }
        else if (ch == 'L')
        {
            
            if (cursor != arr.begin())
                cursor--;

        }
        else if (ch == 'D')
        {
            
            if (cursor != arr.end())
                cursor++;
        }
        else if (ch == 'B')
        {
            if (cursor != arr.begin())
            {
                cursor = arr.erase(--cursor);
            }

        }
    }
    for(auto a : arr)
    {
       cout << a;
    }
    return 0;
}
