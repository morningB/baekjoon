#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<int> st;
    for (int i = 0;i < s.size();i++) {
        if (st.empty())
            st.push(s[i]);
        else if(s[i] == ')') {
            if (st.top() == '(')
                st.pop();
            else {
                st.push(s[i]);
            }
        }
        else if (s[i]== '(') {
            /*if (st.top() == '(')
                st.push('(');
            else if(st.top() == ')')*/
            st.push(s[i]);
        }
    }

    if (st.empty())
        return true;
    else
        return false;

}