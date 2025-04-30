#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    // 0~9까지의 한 셋
    // 6,9는 중복 사용
    vector<int> arr(10, 0);

    string str; // 숫자지만 한자리씩 비교하기 위해 문자열 사용
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        int n = str[i] - '0';
        if (n == 6 || n == 9)
            arr[6]++;
        else
            arr[n]++;
        /*if (str[i] == '0')
            arr[0]++;
        else if (str[i] == '1')
            arr[1]++;
        else if (str[i] == '2')
            arr[2]++;
        else if (str[i] == '3')
            arr[3]++;
        else if (str[i] == '4')
            arr[4]++;
        else if (str[i] == '5')
            arr[5]++;
        else if (str[i] == '6' || str[i] == '9')
            arr[6]++;
        else if (str[i] == '7')
            arr[7]++;
        else if (str[i] == '8')
          arr[8]++;  */

    }
    arr[6] = (arr[6] + 1) / 2;
   
    auto re = max_element(arr.begin(), arr.end());

    cout << *re;
}