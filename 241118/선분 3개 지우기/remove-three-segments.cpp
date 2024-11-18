#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point
{
    int st;
    int ed;
};

Point arr[100];

int checkarr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    

    //서로 다른 가짓수
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].st >> arr[i].ed;
        for (int j = arr[i].st; j <= arr[i].ed; j++)
        {
            checkarr[j]++;
        }
    }
    int cnt = 0;

    for (int i = 0; i < n; i++) // 한줄 선택
    {
        for (int j = i+1; j < n; j++) // 두줄 선택
        {
            for (int k = j+1; k < n; k++) // 세줄 선택 // j가 변해야 k의 범위가 변함.
            {
                int flag = 0;
                for (int p = arr[i].st; p <= arr[i].ed; p++)
                {
                    checkarr[p]--;
                }
                for (int p = arr[j].st; p <= arr[j].ed; p++)
                {
                    checkarr[p]--;
                }
                for (int p = arr[k].st; p <= arr[k].ed; p++)
                {
                    checkarr[p]--;
                }
                for (int p = 0; p < 100; p++)
                {
                    if (checkarr[p] >= 2)
                    {
                        flag = 1;
                        break;
                    }
                }
                for (int p = arr[i].st; p <= arr[i].ed; p++)
                {
                    checkarr[p]++;
                }
                for (int p = arr[j].st; p <= arr[j].ed; p++)
                {
                    checkarr[p]++;
                }
                for (int p = arr[k].st; p <= arr[k].ed; p++)
                {
                    checkarr[p]++;
                }
                if (flag == 0) 
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}