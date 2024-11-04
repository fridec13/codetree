#include <iostream>
using namespace std;

void PrintNum(int n)
{
    if (n == 0)
    {
        return;
    }
    PrintNum(n-1); //1~6까지 출력함수
    cout << n << " "; // 7(=n)출력;
}

void ReverPrintNum(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    ReverPrintNum(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    PrintNum(N);
    cout << "\n";
    ReverPrintNum(N);
    return 0;
}