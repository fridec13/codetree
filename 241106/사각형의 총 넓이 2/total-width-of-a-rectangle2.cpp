#include <iostream>
using namespace std;

int arr[200][200];
int cnt = 0;
int cur = 100;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = y1+cur; j < y2+cur; j++)
        {
            for (int k = x1+cur; k < x2+cur; k++)
            {
                if (arr[j][k]) continue;
                arr[j][k] = 1;
                cnt++;
                
            }
        }
    }

    cout << cnt;
    return 0;
}