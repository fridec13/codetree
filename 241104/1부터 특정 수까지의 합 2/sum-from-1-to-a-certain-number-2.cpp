#include <iostream>
using namespace std;

int func(int n)
{
    if ( n == 1) return 1;

    return func(n-1) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    cout << func(n);
    return 0;
}