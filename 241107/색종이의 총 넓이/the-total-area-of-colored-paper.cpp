#include <iostream>
using namespace std;

#define OFFSET 100

int arr[200][200];

int cntarea;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        x2 = x1 + 8;
        y2 = y1 + 8;
        for (int j = y1 + OFFSET; j < y2 + OFFSET; j++)
        {
            for (int k = x1 + OFFSET; k < x2 + OFFSET; k++)
            {
                if (arr[j][k]) continue;
                arr[j][k] = 1;
                cntarea++;
            }
        }
    }

    cout << cntarea;
    return 0;
}