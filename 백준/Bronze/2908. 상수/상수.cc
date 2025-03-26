#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    int n1, n2;

    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    
    n1 = stoi(s1);
    n2 = stoi(s2);

    cout << (n1 > n2 ? n1 : n2);
}