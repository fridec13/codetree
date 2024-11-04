#include <iostream>
using namespace std;

void func(int N)
{
    if (N == 0) return;
    cout << N << " ";
    func(N-1);
    cout << N << " ";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    func(N);
    return 0;
}