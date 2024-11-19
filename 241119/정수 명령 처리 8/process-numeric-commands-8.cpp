#include <iostream>
#include <list>
#include <string>

using namespace std;

list<int> l;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string cmd;
        cin >> cmd;

        if ( cmd == "push_back")
        {
            int num;
            cin >> num;
            l.push_back(num);
        }
        if ( cmd == "push_front")
        {
            int num;
            cin >> num;
            l.push_front(num);
        }
        if ( cmd == "pop_front")
        {
            cout << l.front() << "\n";
            l.pop_front();
        }
        if ( cmd == "front")
        {
            cout << l.front() << "\n";
        }
        if ( cmd == "pop_back")
        {
            cout << l.back() << "\n";
            l.pop_back();
        }
        if ( cmd == "back")
        {
            cout << l.back() << "\n";
        }
        if ( cmd == "size" )
        {
            cout << l.size() << "\n";
        }
        if ( cmd == "empty" )
        {
            cout << l.empty() << "\n";
        }
    }
    return 0;
}