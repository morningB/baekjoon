#include "iostream"
#include "string"
#include "vector"
#include "stack"
using namespace std;

int main()
{
	int n; // 반복 횟수
	int cnt = 0; //좋은 단어 숫자.
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		stack<char> st; // 단어 확인용 스택
		string str; // 입력받는 문자열
		cin >> str;

		for (int j = 0;j < str.size();j++)
		{
			if (st.empty())
			{
				st.push(str[j]);
			}
			else if (st.top() == str[j])
			{
				st.pop();
				
			}
			else
			{
				st.push(str[j]);
			}
			
		}
		if (st.empty())
			cnt++;
	}
	cout << cnt;
}