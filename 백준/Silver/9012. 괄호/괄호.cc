#include "iostream"
#include "string"
#include "vector"
#include "stack"
using namespace std;

int main()
{
    
    int n; // 횟수
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        stack<char> st;
        
        string str;
        cin >> str;
        for (int j = 0;j < str.size();j++)
        {
            if (st.empty()) // 처음 푸쉬
            {
                st.push(str[j]);
            }
            else {
                if (str[j] == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    st.push(str[j]);
                }
            }
                
        }
        if (st.empty())
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}