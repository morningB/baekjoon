#include <iostream>
#include <list>

using namespace std;

int main() {
    string input;
    cin >> input;

    int m;
    cin >> m;

    list<char> text(input.begin(), input.end());
    auto cursor = text.end();  // 커서: 마지막을 가리킴

    while (m--) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (cursor != text.begin()) cursor--;
        }
        else if (command == 'D') {
            if (cursor != text.end()) cursor++;
        }
        else if (command == 'B') {
            if (cursor != text.begin()) {
                cursor = text.erase(--cursor);  // erase는 지운 다음 원소를 반환
            }
        }
        else if (command == 'P') {
            char ch;
            cin >> ch;
            text.insert(cursor, ch);
        }
    }

    for (char c : text) cout << c;
    return 0;
}
