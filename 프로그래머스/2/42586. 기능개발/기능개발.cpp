#include <string>
#include <vector>

using namespace std;

vector<int> countGroups(const vector<int>& arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int count = 1;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        }
        else {
            result.push_back(count);
            count = 1;  // 새로운 숫자 시작
        }
    }

    result.push_back(count);  // 마지막 그룹

    return result;
}
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> times;
    int date = 0;
    int cnt = 0;
    for (int i = 0;i < progresses.size();i++) {
        date = 0;
      
            while (progresses[i] < 100) {
                progresses[i] += speeds[i];
                date += 1;

            }
        // 여기가 7일이 아니라 횟수가 들어가야됨
            if (!times.empty() && date < times[times.size() - 1])
                times.push_back( times[times.size() - 1]);
            else
                times.push_back(date);
            // 7 7 5 일 때 
            
    }
    answer = countGroups(times);
    return answer;
}