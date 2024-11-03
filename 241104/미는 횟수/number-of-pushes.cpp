#include <iostream>
#include <string>
using namespace std;

int cnt;
int flag = 0;
int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        a = a.substr(a.length()-1, 1) + a.substr(0, a.length()-1);
        cnt++;
        if (a == b)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0) cout << -1;
    else cout << cnt;
    return 0;
}