#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	vector<int> arr(n + 1);
	vector<int> dp(n + 1);

	for (int i = 1;i <= n;i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= i; j++) 
		{
			dp[i] = max(dp[i], dp[i - j] + arr[j]);
		}
	}
	cout << dp[n];
}
