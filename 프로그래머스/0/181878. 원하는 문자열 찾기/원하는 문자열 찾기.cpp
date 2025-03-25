#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
   transform(myString.begin(), myString.end(), myString.begin(), ::toupper);
   transform(pat.begin(), pat.end(), pat.begin(), ::toupper);
    
    if(myString.size() < pat.size()) return 0;
    else if (myString.find(pat) != string::npos){
        return 1;    
    }
    return 0;
}