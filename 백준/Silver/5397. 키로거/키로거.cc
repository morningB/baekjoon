#include <iostream>
#include <list>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin >> str;

        list<char> arr;
        auto cursor = arr.begin();

        for(int j=0;j<str.size();j++)
        {
            if(str[j] == '<')
            {
                if(cursor != arr.begin())
                    cursor--;
            }
            else if(str[j] == '>')
            {
                if(cursor != arr.end())
                cursor++;
            }
            else if(str[j] == '-')
            {
                if(cursor != arr.begin())
                cursor = arr.erase(--cursor);
                
            }
            else
            {
                cursor = arr.insert(cursor,str[j]);
                cursor++;
            }

        }
        for(auto a:arr)
        {
            cout<<a;
        }
        cout << endl;
    }
   
}

