#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    char c = alp[0];
    for (int i = 0;i < my_string.size();i++) {
        if (my_string[i] == c)
            my_string[i] = toupper(my_string[i]);
    }
    return my_string;
}