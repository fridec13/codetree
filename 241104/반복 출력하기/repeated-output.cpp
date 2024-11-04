#include <iostream>
using namespace std;

void PrintSp(int N)
{
    for (int i=0; i < N; i++)
    {
        cout << "12345^&*()_";
        cout << "\n";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintSp(n);
    return 0;
}