#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    char arr[5][15] = {};

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    string result = "";
    for (int i = 0;i < 15;i++)
    {
        for (int j = 0;j < 5;j++) {
            if (arr[j][i] == '\0') {
                continue;
            }
            else
                result += arr[j][i];
        }
    }

    cout << result << endl;
    return 0;
}
