// #include <iostream>
// #include <stack>
// #include <cmath>
// using namespace std;

// int evaluatePrefix(string exp) {
//     stack<int> s;

//     // Traverse the expression in reverse order
//     for (int i = exp.length() - 1; i >= 0; i--) {

//         // skip spaces
//         if (exp[i] == ' ') {
//             continue;
//         }

//         // if operand 
//         if (isdigit(exp[i])) {
//             s.push(exp[i] - '0'); // Convert char to int
//         }
//         else {
//             int val1 = s.top(); s.pop();
//             int val2 = s.top(); s.pop();

//             switch (exp[i]) {
//                 case '+': s.push(val1 + val2); break;
//                 case '-': s.push(val1 - val2); break;
//                 case '*': s.push(val1 * val2); break;
//                 case '/': s.push(val1 / val2); break;
//                 case '^': s.push(pow(val1, val2)); break;
//             }
//         }
//     }
//     return s.top();
// }

// int main() {
//     string exp;

//     cout << "Enter prefix expression: ";
//     getline(cin, exp);   

//     cout << "Result: " << evaluatePrefix(exp) << endl;

//     return 0;
// }

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// Function to check precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}
// Convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> s;
    string result="";

    for(char c : infix) {
        // Operand
        if (isalnum(c)) {
            result += c;
        }
        // Opening bracket
        else if (c == '(') {
            s.push(c);
        }
        // Closing bracket
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                result += s.top();
                s.pop();
            }
            s.pop(); // Pop '('
        }
        // Operator
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                result += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        result += s.top();
        s.pop();
    }

    return result;
}