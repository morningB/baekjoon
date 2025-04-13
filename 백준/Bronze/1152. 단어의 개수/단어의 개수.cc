#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

string trim(string str)
{
	auto start = find_if_not(str.begin(), str.end(), ::isspace);
	auto end = find_if_not(str.rbegin(), str.rend(), ::isspace).base();
	if (start >= end) return "";
	return string(start, end);

}
int main() {
	string n;
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	getline(cin,n);
	
	int cnt = 0;
	n =trim(n);
	
	for (int i = 0; i < n.size(); i++)
	{
		
		if (n[i] == ' ' || i == n.size() - 1)
		{
			cnt++;
		}
		
	}
	cout << cnt;
	
}
