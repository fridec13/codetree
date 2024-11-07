#include <iostream>
using namespace std;

int arr[200][200];
int offset = 100;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = y1 + offset; j < y2+offset; j++)
        {
            for (int k = x1 + offset; k < x2+offset; k++)
            {
                if (i % 2 == 0)
                {
                    arr[j][k] = 1;
                }
                else
                {
                    arr[j][k] = 2;
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 200; j++)
        {
            if (arr[i][j] == 2) cnt++;
        }
    }

    cout << cnt;
    return 0;
}