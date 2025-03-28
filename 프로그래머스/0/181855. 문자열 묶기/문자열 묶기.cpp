#include <iostream>
#include <vector>
#include <sstream>
#include <queue>
#include <numeric>
#include<algorithm>

using namespace std;
int solution(vector<string> strArr) {
    int answer = 0;
    // 길이가 같은 문자열끼리 묶을 때 가장 많은 개수

    vector<int> arr(strArr.size(), 0);
    vector<int> cnt(strArr.size(), 0);

    for (int i = 0;i < strArr.size();i++) {
        for (int j = 0;j < strArr[i].size();j++) {
            arr[i]++;
        }
    }
    // {1,2,1,3,2}
    for (int i = 0;i < arr.size();i++) {
        cnt[arr[i]]++;
    }
    answer = *max_element(cnt.begin(), cnt.end());
    return answer;
}
