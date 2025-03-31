#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    vector<int> a;
    deque <pair<int, int>> arr;
    for (int i = 0;i < rank.size();i++) {
        arr.push_back({ rank[i],i});
    }
    // 10000 * 1위 인덱스 + 100 * 2위 인덱스 + 3위

    sort(arr.begin(), arr.end());
    // 정렬 완료
    for (const auto& aw : arr) {
        if (attendance[aw.second]) {
            a.push_back(aw.second);
            if (a.size() == 3) break;
        }
    }


    answer = a[0] * 10000 + a[1] * 100 + a[2];
    return answer;
}
