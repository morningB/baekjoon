#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string w;
    getline(cin,w);
    int n = stoi(w);

    for(int i=0;i<n;i++)
    {
        stack<string> st;
        string temp; // 임시 문자열
        
        getline(cin,temp); // 공백 포함 입력받기

        // 공백으로 구분하기
        istringstream ss(temp);
        while(getline(ss,temp,' '))
        {
            st.push(temp);
        }

        cout<< "Case #" << i+1 << ": ";
        while(!st.empty())
        {
            cout << st.top()<< " ";
            st.pop();
        }
        cout << endl;

    }
    
	return 0;
}