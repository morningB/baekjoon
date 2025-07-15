#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

long long number(long long a, long long b, long long c)
{
	if (b == 1) return a%c;

	long long temp = number(a, b / 2, c);
	long long even = temp * temp % c;

	if (b % 2 == 1)
	{
		even = even * (a % c) % c;
	}
	return even;
		 
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long a, b,c;
	cin >> a >> b >> c; 
	
	cout << number(a, b, c);

}