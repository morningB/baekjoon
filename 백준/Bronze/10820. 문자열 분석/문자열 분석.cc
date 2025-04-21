#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main()
{
    string str;
    while(getline(cin, str, '\n'))
    {
        int a = 0, b = 0, c = 0, d = 0;// 소문자,대문자,숫자,공백의 각각 개수    
        

        for (int j = 0;j < str.size();j++)
        {
            if (65 <= str[j] && str[j] <= 90)
            {
                a++;
            }
            else if (97 <= str[j] && str[j] <= 122)
            {
                b++;
            }
            else if (str[j] == ' ')
            {
                d++;
            }
            else {
                c++;
            }
        }
        cout << b << " " << a << " " << c << " " << d << endl;
    }

}