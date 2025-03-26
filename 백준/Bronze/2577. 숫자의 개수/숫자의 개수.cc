#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    int n,m,l;
    
    int arr[10] = { 0, };

    
    cin >> n >> m >> l;
    string st = to_string(m * n * l);

    for (int i = 0 ; i < st.size() ; i++ ) {
        if (st[i] == '0')
            arr[0]++;
        else if (st[i] == '1')
            arr[1]++;
        else if (st[i] == '2')
            arr[2]++;
        else if (st[i] == '3')
            arr[3]++;
        else if (st[i] == '4')
            arr[4]++;
        else if (st[i] == '5')
            arr[5]++;
        else if (st[i] == '6')
            arr[6]++;
        else if (st[i] == '7')
            arr[7]++;
        else if (st[i] == '8')
            arr[8]++;
        else if (st[i] == '9')
            arr[9]++;
    }
    for (auto a : arr) {
        cout << a << endl;
    }
}