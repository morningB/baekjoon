#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr(26,-1);
    string st;
    // baekjoon
    // 1024375 -> 원래 6인데 마지막 o가 대입되서 7
    cin >> st;

    for (int i = 0;i < st.size();i++) {
        if(arr[st[i] - 97] == -1)
        arr[st[i] - 97] = i;
    }
    for (auto& a : arr) {
        cout << a << " ";
    }
}
