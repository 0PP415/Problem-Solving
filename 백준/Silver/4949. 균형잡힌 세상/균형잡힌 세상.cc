#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_parenthese(char ch) {
    if (ch == '(') return true;
    if (ch == ')') return true;
    if (ch == ']') return true;
    if (ch == '[') return true;
    return false;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool flag;
    string inputStr;
    vector<char> parentheses;
    while (true) {
        flag = true;
        parentheses.clear();
        getline(cin, inputStr);
        if (inputStr.size() == 1 && inputStr[0] == '.') break;

        for(char ch: inputStr) {
            if (!is_parenthese(ch)) continue;
            if (ch == '(' || ch == '[') {
                parentheses.push_back(ch);
            }
            if (ch == ')') {
                if (parentheses.empty()) {
                    flag = false;
                    break;
                }
                if (parentheses.back() != '(') {
                    flag = false;
                    break;
                }
                parentheses.pop_back();
            }
            if (ch == ']') {
                if (parentheses.empty()) {
                    flag = false;
                    break;
                }
                if (parentheses.back() != '[') {
                    flag = false;
                    break;
                }
                parentheses.pop_back();
            }
        }
        if (flag && parentheses.empty()) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
    return 0;
}
