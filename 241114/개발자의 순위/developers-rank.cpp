#include <iostream>
#include <algorithm>

using namespace std;

int k, n;

int Dev[11][21];


int arr[21][21];


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> k >> n;

    for (int i = 0; i < k; i++)
    {
        for ( int j = 1; j <= n; j++)
        {
            cin >> Dev[i][j];
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j <= n; j++) // 1등 고르고
        {
            for (int k = j+1; k <= n; k++) //다음 애들 고름.
            {
                if ( arr[Dev[i][j]][Dev[i][k]] == -1) continue;
                if ( arr[Dev[i][j]][Dev[i][k]] == 0)
                {
                    if ( j < k ) //j가 높음 근데 for 문 자체가 j가 무조건 높게 도는걸.
                    {
                        arr[Dev[i][j]][Dev[i][k]] = Dev[i][j];
                    }
                    if ( j > k )
                    {
                        arr[Dev[i][j]][Dev[i][k]] = Dev[i][k];
                    }
                }
                     //이건 두 쌍의 순위 비교 결과 j가 높으면 j k가 높으면 k;
                else if ( arr[Dev[i][j]][Dev[i][k]] == Dev[i][j] && j > k)
                {
                    arr[Dev[i][j]][Dev[i][k]] = -1;
                }
                else if ( arr[Dev[i][j]][Dev[i][k]] == Dev[i][k] && j < k)
                {
                    arr[Dev[i][j]][Dev[i][k]] = -1;
                }
                
            }
        }

    }
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ( arr[i][j] == i ) cnt++;
        }
    }

    cout << cnt /2;
    return 0;
}