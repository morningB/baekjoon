#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int arr[9][9];
    int max = -1, row = 0, col = 0;

    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < 9;j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < 9;j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                    row = i;
                    col = j;
            }
        }
    }
    cout << max << "\n" << row + 1 << " " << col + 1;

    return 0;
}
