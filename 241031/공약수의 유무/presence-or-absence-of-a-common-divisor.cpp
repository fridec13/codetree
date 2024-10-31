#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int flag;
    for (int i = a; i <= b; i++)
    {
        flag = 0;
        if (1920 % i == 0 && 2880 % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << 1;
    }
    else cout << 0;

    return 0;
}