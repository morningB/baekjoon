#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1;
    int cnt = 0;
    cin >> s1;
    for (int i = 0;i < s1.size();i++) {
        if (s1[i] == 'A' || s1[i] == 'B' || s1[i] == 'C')
            cnt += 3;
        else if (s1[i] == 'D' || s1[i] == 'E' || s1[i] == 'F')
            cnt += 4;
        else if (s1[i] == 'G' || s1[i] == 'H' || s1[i] == 'I')
            cnt += 5;
        else if (s1[i] == 'J' || s1[i] == 'K' || s1[i] == 'L')
            cnt += 6;
        else if (s1[i] == 'M' || s1[i] == 'N' || s1[i] == 'O')
            cnt += 7;
        else if (s1[i] == 'P' || s1[i] == 'Q' || s1[i] == 'R' || s1[i] == 'S')
            cnt += 8;
        else if (s1[i] == 'T' || s1[i] == 'U' || s1[i] == 'V')
            cnt += 9;
        else if (s1[i] == 'W' || s1[i] == 'X' || s1[i] == 'Y' || s1[i] == 'Z')
            cnt += 10;
        
    }
    cout << cnt;
}