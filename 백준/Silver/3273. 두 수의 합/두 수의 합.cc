#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;// n개의 정수 수열
    std::vector<int> arr;// n개만큼 입력 받기
    int x;// 순서쌍 x
    int cnt = 0; // 개수
    int start, end; // 시작과 끝

    std::cin >> n;

    start = 0;
    end = n - 1;

    for (int i = 0;i < n;i++) {
        int a;
        std::cin >> a;
        arr.push_back(a);
    }

    std::cin >> x;
    sort(arr.begin(), arr.end());

        while (start < end) {
            if (arr[start] + arr[end] < x) {
                start++;
            }
            else if (arr[start] + arr[end] > x) {
                end--;
            }
            else {
                cnt++;
                start++;
                end--;
            }
        }
    
    

    std::cout << cnt;
}
