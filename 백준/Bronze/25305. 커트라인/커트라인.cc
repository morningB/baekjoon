#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k,temp=0;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            if (arr[i] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

        }
    }
    cout << arr[k - 1];

    
}