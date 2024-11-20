#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> dq;

    int n;
    cin >> n;
    for (int i =0; i < n; i++)
    {
        string cmd;
        cin >> cmd;
        if ( cmd == "push_back")
        {
            int num;
            cin >> num;
            dq.push_back(num);
        }
        if ( cmd == "push_front")
        {
            int num;
            cin >> num;
            dq.push_front(num);
        }
        if ( cmd == "pop_front")
        {
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        if ( cmd == "pop_back")
        {
            cout<< dq.back() << "\n";
            dq.pop_back();
        }
        if ( cmd == "size")
        {
            cout << dq.size() << "\n";
        }
        if ( cmd == "empty")
        {
            cout << dq.empty() << "\n";
        }
        if ( cmd == "front" )
        {
            cout << dq.front() << "\n";
        }
        if ( cmd == "back" )
        {
            cout << dq.back() << "\n";
        }
    }
    return 0;
}