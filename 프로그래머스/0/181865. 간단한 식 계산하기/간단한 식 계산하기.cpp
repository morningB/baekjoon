#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
int solution(string binomial) {
    int answer = 0;
    vector<string> arr;
    int n1, n2;
    istringstream ss(binomial);
    string token;
    while (getline(ss, token, ' ')) {
        arr.push_back(token);
    }
    if (arr[1] == "+") {
        answer = stoi(arr[0]) + stoi(arr[2]);
    }
    else if (arr[1] == "-") {
        answer = stoi(arr[0]) - stoi(arr[2]);
    }
    else if (arr[1] == "*") {
        answer = stoi(arr[0]) * stoi(arr[2]);
    }
    return answer;
}