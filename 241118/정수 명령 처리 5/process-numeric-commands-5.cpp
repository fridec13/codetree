#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> v;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for (int i =0; i < n; i++)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push_back")
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        if (cmd == "get")
        {
            int num;
            cin >> num;
            cout << v[num-1] << "\n";
        }
        if (cmd == "size")
        {
            cout << v.size() << "\n";
        }
        if (cmd == "pop_back")
        {
            v.pop_back();
        }
    }
    return 0;
}