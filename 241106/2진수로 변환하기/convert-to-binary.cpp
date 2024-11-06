#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    int digit[100000];
    int cnt = 0;
    while (true)
    {
        if (n < 2)
        {
            digit[cnt] = n % 2;
            break;
        }

        digit[cnt] = n % 2;
        cnt++;

        n = n /2;
    }

    for (int i = cnt; i >= 0; i--)
    {
        cout << digit[i];
    }

    return 0;
}