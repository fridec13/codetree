#include <iostream>
using namespace std;

int F(int n)
{
    if ( n == 1) return 1;
    if ( n == 2) return 1;

    return F(n-1) + F(n-2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << F(N);
    
    return 0;
}