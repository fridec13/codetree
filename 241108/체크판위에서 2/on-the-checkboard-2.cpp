#include <iostream>
#include <algorithm>

using namespace std;

//w는 0, b는 1;

int arr[15][15];

int main() {
    // 여기에 코드를 작성해주세요.
    int R, C;
    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            char input;
            cin >> input;
            if ( input == 'W')
            {
                arr[i][j] = 0;
            }
            else 
            {
                arr[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i < R-1; i++)
    {
        for (int j = 1; j < C -1; j++)
        {
            for (int k = i + 1; k < R -1; k++)
            {
                for (int q = j + 1; q < C -1; q++)
                {
                    if (arr[0][0] == 0 && arr[R-1][C-1] == 1)
                    {
                        if (arr[i][j] == 1 && arr[k][q] == 0)
                        {
                            cnt++;
                        }
                    }
                    else if (arr[0][0] == 1 && arr[R-1][C-1] == 0)
                    {
                        if ( arr[i][j] == 0 && arr[k][q] == 1)
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}