#include <iostream>
using namespace std;

int F(int n)
{
    if ( n == 1) return 1;
    if ( n == 2 ) return 2;
    
    return F(n/3) + F(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}