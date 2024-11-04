#include <iostream>
using namespace std;

int cnt;

bool IsNumber(int i)
{
    if (i % 2 == 0)
    {
        return false;
    }
    if (i % 10 == 5)
    {
        return false;
    }
    if (i % 3 == 0 && i % 9 != 0)
    {
        return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (IsNumber(i))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}