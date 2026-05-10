#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(const string &expr)
{
    stack<char> s;
    for (char c : expr)
    {
        if (c == '(' || c == '{')
        {
            s.push(c);
        }
        else if (c == ')' || c == '}')   // <-- FIX here
        {
            if (s.empty())
                return false;

            char top = s.top();
            s.pop();

            if ((c == ')' && top != '(') || (c == '}' && top != '{'))
                return false;
        }
    }
    return s.empty();
}

int main()
{

    string exp = "{[()]}";

    if (isBalanced(exp))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;


        return 0;

}