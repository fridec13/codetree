#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];

int maxval = -99999;
int cnt = 1;

int main() {
    // 여기에 코드를 작성해주세요.
    // 입력은 -도 포함한다.
    // 간단하게 따라가라. 나온 문제하고 "똑같이" 해라.

    int N;
    cin >> N;
    for (int i =0; i < N; i++)
    {
        cin >> arr[i];
        cnt++;
        
        if ( i == 0 || arr[i-1] * arr[i] < 0 )
        {
            cnt = 1;
        }
        maxval = max(cnt, maxval);
    }
    cout << maxval;
    return 0;
}