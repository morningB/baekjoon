#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    // l이랑 r 중 l이 먼저 나온다면 l왼쪽의 문자열을 순서대로 담기, r이라면 오른쪽문자열 담기
    // u,d가 없다면 빈 리스트;
    for (int i=0;i<str_list.size();i++){
        if(str_list[i] == "l"){
            return vector<string> (str_list.begin(),str_list.begin()+i);
        }else if(str_list[i] == "r"){
            return vector<string> (str_list.begin()+i+1,str_list.end());
        }
    }
    return {};
}