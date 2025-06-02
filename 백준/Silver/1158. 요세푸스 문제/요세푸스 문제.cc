#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    
    int n,m;
    cin >>n >>m;
    list<int> arr;
    vector<int> vec;

    for(int i=0;i<n;i++)
        arr.push_back(i+1);
    

    while(!arr.empty())
    {
        for(int i =0;i<m-1;i++)
        {
            arr.push_back(arr.front());
            arr.pop_front();
        }
        vec.push_back(arr.front());
        arr.pop_front();
    }
        
    cout << "<";
    for(int i=0;i<vec.size()-1;i++)
        cout<<vec[i] << ", ";

    cout<< vec[vec.size()-1] << ">";

    return 0;
}