#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;

    int ch = 0;

    while (1)
    {
        ch = 0;
        for (int i = 0;i < arr.size();i++)
        {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;ch = 1;
            }
            else if (arr[i] < 50 && arr[i] % 2 == 1) {
                arr[i] *= 2;arr[i]++;ch = 1;
            }
        }
        if (ch == 0)break;
        answer++;
    }

    return answer;
}