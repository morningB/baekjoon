#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int tree[26][2];


void preorder(char node)
{
    if(node == -1) return;
    cout << (char)(node + 'A');
    preorder(tree[node][0]);
    preorder(tree[node][1]);
}
void inorder(char node)
{
    if(node == -1) return;
    inorder(tree[node][0]);
    cout << (char)(node + 'A');
    inorder(tree[node][1]);
}
void postorder(char node)
{
    if(node == -1) return;
    postorder(tree[node][0]);
    postorder(tree[node][1]);
    cout << (char)(node + 'A');
}

int main() {
    ios_base::sync_with_stdio(false); // C++ 스트림과 C 스트림의 동기화 비활성화
    cin.tie(NULL); // cin과 cout의 묶음(tie) 해제

    int n;
    cin >> n; // 노드의 개수
    for(int i=0;i<n;i++) // 간선의 개수
    {
        // 각 노드와 왼쪽 자식, 오른쪽ㅈ ㅏ식이 주어짐.
        // 이름은 문자열이고, A가 root, 자식 없다면 . 
        char node,left,right;
        cin >> node >> left >> right;
        node -= 'A';
        
        if(left == '.')
            tree[node][0] = -1;
        else    
            tree[node][0] = left - 'A';
        if(right == '.')
            tree[node][1] = -1;
        else
            tree[node][1] = right - 'A';
                
    }

    preorder(0); // 전위
    cout << endl;
    inorder(0); // 중위
    cout << endl; 
    postorder(0); // 후위
    cout << endl;
}
