#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n,m;
    string st;
    cin >> m;
    for (int i = 0;i < m;i++) {
        cin >> n >> st;
        for (int j = 0;j < st.size();j++) {
            for (int k = 0;k < n;k++) {
                cout << st[j];
            }
        }
        cout << endl;
    }
    
    
}