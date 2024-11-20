#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    stack<int> s;
    string input;
    cin >> input;
    
    for (int i = 0; i < input.length(); i++)
    {
        if (i == input.length()-1)
        {
            if ( input[i] == '(')
            {
                cout << "No";
                return 0;
            }
            else if ( input[i] == ')')
            {
                s.pop();
                if (s.empty())
                {
                    cout << "Yes";
                    return 0;
                }
                else if (!s.empty())
                {
                    cout << "No";
                    return 0;
                }
            }
        }

        if (input[i] == '(')
        {
            s.push(input[i]);
        }
        else if (input[i] == ')')
        {
            if (!s.empty())
            {
                s.pop();
            }
            else if (s.empty())
            {
                cout << "No";
                return 0;
            }
        }

    }


    return 0;
}