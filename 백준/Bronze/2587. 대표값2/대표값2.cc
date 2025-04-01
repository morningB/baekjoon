#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    int temp = 0, max = 0;
    for (int i = 0;i < 5;i++) {
        cin >> arr[i];
        sum += arr[i];

    }

    for (int i = 0;i < 4;i++) {
        for (int j = i+1;j < 5;j++) {
            if (arr[i] > arr[j]) {
                max = arr[j];
                arr[j] = arr[i];
                arr[i] = max;
            }

        }
    }
    //정렬된 상태에서 중간값의 인덱스는 2. 만약 n이 무작위의 수라면 n/2하면 됨
    cout << sum / 5 << "\n" << arr[2];
    
    
}