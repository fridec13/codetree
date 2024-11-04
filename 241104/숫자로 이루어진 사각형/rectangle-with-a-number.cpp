#include <iostream>
using namespace std;

void DrawRac(int n)
{
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << cnt << " ";
            cnt++;
            if (cnt == 10) cnt = 1;
        }
        cout << "\n";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    DrawRac(n);
    return 0;
}