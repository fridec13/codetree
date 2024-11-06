#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int list[10000] = {};
    int n, seed;
    cin >> n >> seed;
    int cnt = 0;
    while (true)
    {
        if (n < seed)
        {
            list[cnt] = n % seed;
            break;
        }

        list[cnt] = n% seed;
        cnt++;

        n =  n/ seed;
    }

    for (int i = cnt; i >= 0; i--)
    {
        cout << list[i];
    }
    return 0;
}