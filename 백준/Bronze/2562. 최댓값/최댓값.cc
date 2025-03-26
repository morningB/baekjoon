#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,ch=0,max = -1;
    vector<int> arr;
    for (int i = 0;i < 9;i++) {
        cin >> n;
        arr.push_back(n);
    }
    for (int i = 0;i < 9;i++) {
        if (max < arr[i]) {
            ch = i;
            max = arr[i];
        }
    }
    cout << max << endl;
    cout << ch+1;
}