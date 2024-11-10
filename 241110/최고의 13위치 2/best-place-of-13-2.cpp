#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int n;
int arr[20][20];

bool InRange(int y, int x)
{
    return ( 0 <= y && y < n && 0 <= x && x < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int inputcheck = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            inputcheck += arr[i][j];
        }
    }    

    if (inputcheck <= 2)
    {
        cout << inputcheck;
        return 0;
    }
    int maxval = INT_MIN;

    for (int i = 0; i < n; i++) //행을 하나 선택
    {
        for (int j = 0; j < n-2; j++) // 열하나 선택 // 첫번째 1*3 선택
        {
            int sum1 = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            // 만약 x길이가 3이라면 n이 5일때 탐색은 0,1,2 1,2,3 2,3,4까지 가능.
            // 0, 1 ,2 까지 돎.
            // x 길이가 3인데 n이 6이면 0, 1,2,3까지 돌음. 
            // 이때는 열이 다른 것을 보장될 때를 고르는 것.
            for (int k = 0; k < n; k++) // 다음 행 선택 // 행은 같아도 됨.
            {
                //다만
                if (i == k && InRange(i, j+5) ) //행이 같다면, 다음 잡히는 것이 격자 안이라면.
                {
                    for (int l = j+3; l < n-2; j++) //l은 j+3부터 n-2까지 돌고
                    {
                        int sum =  sum1 + arr[k][l] + arr[k][l+1] + arr[k][l+2];
                        if (sum == 0) continue;
                        maxval = max(maxval, sum);
                    }
                }
                else if ( i != k) //행이 다르다면
                {
                    for (int l = 0; l < n-2; l++) //전체를 다돌아서 골라야함.
                    {
                        int sum = sum1 + arr[k][l] + arr[k][l+1] + arr[k][l+2];
                        if (sum == 0) continue;

                        maxval = max(maxval, sum);
                    }
                }
            }
        }
        
    }
    cout << maxval;

    return 0;
}