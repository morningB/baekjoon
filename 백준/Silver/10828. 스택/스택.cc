#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    stack<int> st;
    int n;
    string temp = "";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == "push")
        {
            int a;
            cin >> a;
            st.push(a);
        }
        else if (temp == "empty")
        {
            if (st.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if (temp == "pop") {
            if (st.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if (temp == "size")
        {
            cout << st.size() << "\n";
        }
        else if (temp == "top")
        {
            if (st.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.top() << "\n";
            }
        }
        
    }

}
