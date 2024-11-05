#include <iostream>
using namespace std;

int arr[100];

int F(int N)
{
    if ( N == 1) return 2;
    if ( N == 2) return 4;

    return F(N-1) * F(N-2) % 100;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}