#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<int> q;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i =0; i < n; i++)
    {
        string s;
        cin >> s;
        if ( s == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        if ( s == "front")
        {
            cout << q.front() << "\n";
        }
        if ( s == "pop")
        {
            cout << q.front() << "\n";
            q.pop();
        }
        if ( s == "size")
        {
            cout << q.size() << "\n";
        }
        if ( s == "empty")
        {
            cout << q.empty() << "\n";
        }
    }
    return 0;
}