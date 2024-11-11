#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[100];
int keyarr[3];

int main() {
    // 여기에 코드를 작성해주세요.
    // 1에서 n까지 숫자를 '중복'해서 뽑아 3자리를 만들어야하는 자물쇠,
    // 키 조합과 한자리라도 거리가 2 이내 이면 열림.
    // 자물쇠가 열리는 서로다른 조합의 수.
    // 자물쇠가 열리는 조합 수를 셀것인가 아니면 자물쇠가 열리지 않는 조합수를 셀것인가.
    // 숫자가 커지면 열리는 조합수를 세는 것이 빠를 것.
    int n;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> keyarr[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (abs(i - keyarr[0]) <= 2 || abs(j -keyarr[1]) <= 2 || abs(k - keyarr[2]) <=2)
                {
                    cnt++;
                }

            }
        }
    }
    cout << cnt;
    return 0;
}