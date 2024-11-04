#include <iostream>
#include <string>
using namespace std;

int cnt;

bool IsNumber(int i)
{
    string a = to_string(i);
    for (int j = 0; j < a.length(); j++)
    {
        int b = a[j] - '0';
        if (b == 3 || b == 6 || b == 9)
        {
            return true;
        }
    }
    return false;
}

bool Is3Multi(int i)
{
    return i % 3 == 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (IsNumber(i) || Is3Multi(i))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}