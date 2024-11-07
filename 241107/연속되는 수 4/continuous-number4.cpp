#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];
int cnt = 1;
int ans = -99999;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        cnt++;
        if ( i == 0 || arr[i] - arr[i-1] <= 0)
        {
            cnt = 1;
        }
        ans = max(cnt, ans);
    }

    cout << ans;
    return 0;
}