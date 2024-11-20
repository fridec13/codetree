#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    stack<int> s;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string cmd;
        cin >> cmd;
        if ( cmd == "push")
        {
            int num;
            cin >> num;
            s.push(num);
        }
        if ( cmd == "size")
        {
            cout << s.size() << "\n";
        }
        if ( cmd == "pop" )
        {
            cout << s.top() << "\n";
            s.pop();
        }
        if ( cmd == "empty")
        {
            cout << s.empty() << "\n";
        }
        if ( cmd == "top" )
        {
            cout << s.top() << "\n";
        }
    }
    return 0;
}