/* 我们使用了一个stack<char>类型的栈来存储左括号。
我们遍历字符串中的每个字符，如果遇到左括号就将其
压入栈中，如果遇到右括号，就将栈顶的左括号弹出并
判断是否匹配。如果栈为空或者左右括号不匹配，则返
回false。最后，如果栈为空，则表示所有左括号都有
匹配的右括号，返回true，否则返回false。*/
#include <iostream>
#include <stack>
#include <string>
int Stack(std::string const &str) {
    std::stack<char> st;
    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) {
                return 0;
            }
            if ((c == ')' && st.top() != '(') ||
                (c == ']' && st.top() != '[') ||
                (c == '{' && st.top() != '}')) {
                return 0;
            }
        }
    }
    return 1;
}
int main() {
    std::string str;
    std::cout << "Please enter a string: ";
    std::getline(std::cin, str);
    if (Stack(str)) {
        std::cout << "The string is matched"
                  << "\n";
    } else {
        std::cout << "The string is not matched"
                  << "\n";
    }
    return 0;
}
