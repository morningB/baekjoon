#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> dq;
	int n; cin >> n;
	
	
	for (int i = n; i > 0; i--) 
	{
		dq.push_front(i);
		for (int j = 0; j < i; j++) 
		{
			dq.push_front(dq.back());
			dq.pop_back();
		}
	}
	for (auto x : dq)
		cout << x << " ";
	return 0;
}
