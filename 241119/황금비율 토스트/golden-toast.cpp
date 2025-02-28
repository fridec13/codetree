#include <iostream>
#include <list>

using namespace std;

list<char> l;
list<char>::iterator it;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    
    for (int i= 0; i < n; i++)
    {
        char input;
        cin >> input;
        l.push_back(input);
    }
    it = l.end();
    for (int i = 0; i < m; i++)
    {
        char cmd;
        cin >> cmd;
        if (cmd == 'L')
        {
            if (it != l.begin())
            it--;
        }
        if (cmd == 'P')
        {
            char insertch;
            cin >> insertch;
            l.insert(it, insertch);
        }
        if (cmd == 'R')
        {
            if (it != l.end())
            it++;
        }
        if (cmd == 'D')
        {
            if (it != l.end())
            it = l.erase(it);
        }

    }

    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it;
    }
    return 0;
}