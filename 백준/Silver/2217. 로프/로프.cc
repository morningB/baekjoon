#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;


int main()
{
	int n = 0, answer = 0;
	cin >> n;
	vector<int> arr;
	
	for (int i = 0;i < n;i++)
	{
		int loop;
		cin >> loop;
		arr.push_back(loop);
	}

	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());

	for (int i = 0;i < arr.size();i++)
	{
		int temp = arr[i] * (i+1);

		if (temp > answer)
			answer = temp;
	}
	cout << answer;
}