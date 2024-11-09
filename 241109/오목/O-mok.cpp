#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int arr[19][19];

bool InRange(int i, int j ){
    return (0 <= i && i < 19 && 0 <= j && j < 19);
}


int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    int frestoneb = 0;
    for (int i = 0; i < 19; i++) //확인할 행 또는 열을 고른다.
    {
        for (int j = 0; j < 16; j++) //행을 골랐다면 열을 순회하면서 확인을 해야한다.
        {
            //0이 아니고 연속되기만 하면된다.
            // 인덱스는 0 에서 19까지
            // 19 18 17 16 15 까지 봐야하므로 16까지 순회한다.


                if (arr[i][j] == 1 && arr[i][j+1] == 1 && arr[i][j+2] == 1 && arr[i][j+3] == 1 &&  arr[i][j+4] == 1)
                {
                    cout << 1 << "\n" << i + 1 << " " << j+2+1;
                    return 0;
                }
                else if ( arr[j][i] == 1&&  arr[j+1][i] == 1&& arr[j+2][i] == 1&& arr[j+3][i] == 1 && arr[j+4][i] == 1)
                {
                    cout << 1 << "\n" << j + 2 + 1 << " " << i+ 1;
                    return 0;
                }
                else if (arr[i][j] == 2 && arr[i][j+1] == 2 && arr[i][j+2] == 2 && arr[i][j+3] == 2 && arr[i][j+4] == 2)
                {
                    cout << 2 << "\n" << i + 1 << " " << j+2+1;
                    return 0;
                }
                else if ( arr[j][i] == 2 && arr[j+1][i] == 2 && arr[j+2][i] == 2 && arr[j+3][i] == 2 &&  arr[j+4][i] == 2)
                {
                    cout << 2 << "\n" << j + 2 + 1 << " " << i+ 1;
                    return 0;
                }
                //가로세로는 완탐에 성공했다. 다음은 대각선이다.

                //대각선은 좌상 우하, 우상 좌하 두가지로 구성된다.
                //현재 있는 곳에서 행과 열을 + 1을 해주면 아래로 내려간다.
                //탐색 위치가 벗어나면 안되므로 레인지 함수를 활용한다.
                // if ( i == 2 && j == 2 ) cout << arr[i][j] << "\n" << InRange(i+4, j+4) << "\n";
                


                else if ( InRange(i+4,j+4) && arr[i][j] == 1 && arr[i+1][j+1] == 1 &&  arr[i+2][j+2] == 1&&  arr[i+3][j+3] == 1 && arr[i+4][j+4] == 1) //행을 먼저 고정하고, 우하단으로 탐색한다. 
                {
                    cout << 1 << "\n" << i+2 + 1 << " " << j+2 +1;
                    return 0;
                }
                else if (InRange(i+4, j+4) && arr[j][i] == 1 && arr[j+1][i+1] == 1 && arr[j+2][i+2] ==1 && arr[j+3][i+3] == 1 && arr[j+4][i+4] == 1)
                {
                    cout << 1 << "\n" << j + 2 + 1 << " " << i+2 + 1;
                    return 0;
                }
                else if ( InRange(i+4,j+4) && arr[i][j] == 2 &&arr[i+1][j+1] == 2 && arr[i+2][j+2] == 2 && arr[i+3][j+3] == 2 && arr[i+4][j+4] == 2) //행을 먼저 고정하고, 우하단으로 탐색한다. 
                {
                    cout << 2 << "\n" << i+2 + 1 << " " << j+2 +1;
                    return 0;
                }
                else if (InRange(i+4, j+4) && arr[j][i] == 2 && arr[j+1][i+1] == 2 && arr[j+2][i+2] == 2 && arr[j+3][i+3] == 2 && arr[j+4][i+4] == 2)
                {
                    cout << 2 << "\n" << j + 2 + 1 << " " << i+2 + 1;
                    return 0;
                }

                if ( InRange(i+4,j-4) && arr[i][j] == 1 && arr[i+1][j-1] == 1 && arr[i+2][j-2] == 1 && arr[i+3][j-3] == 1 && arr[i+4][j-4] == 1) //행을 먼저 고정하고, 우하단으로 탐색한다. 
                {
                    cout << 1 << "\n" << i+2 + 1 << " " << j-2 +1;
                    return 0;
                }
                else if (InRange(i+4, j-4) && arr[j][i] == 1 && arr[j-1][i+1] == 1 && arr[j-2][i+2] == 1 && arr[j-3][i+3] == 1 && arr[j-4][i+4] == 1)
                {
                    cout << 1 << "\n" << j + 2 + 1 << " " << i+2 + 1;
                    return 0;
                }
                else if ( InRange(i+4,j-4) && arr[i][j] == 2 && arr[i+1][j-1] == 2 && arr[i+2][j-2] == 2 && arr[i+3][j-3] == 2 && arr[i+4][j-4] == 2) //행을 먼저 고정하고, 우하단으로 탐색한다. 
                {
                    cout << 2 << "\n" << i+2 + 1 << " " << j-2 +1;
                    return 0;
                }
                else if (InRange(i+4, j-4) && arr[j][i] == 2 &&  arr[j-1][i+1] == 2 &&  arr[j-2][i+2] == 2 && arr[j-3][i+3] == 2 && arr[j-4][i+4] == 2)
                {
                    cout << 2 << "\n" << j + 2 + 1 << " " << i+2 + 1;
                    return 0;
                }

        } 
    }
    // cout << 0;


    return 0;
}