#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    int n,m,max = -1000000,min = 1000000;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> m;
        arr.push_back(m);
    }
    sort(arr.begin(), arr.end());
    cout << arr[0] << " "<< arr[n - 1];


}