#include <iostream>
using namespace std;

int sum;

bool IsPrime(int i)
{
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i != 1 && IsPrime(i))
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}