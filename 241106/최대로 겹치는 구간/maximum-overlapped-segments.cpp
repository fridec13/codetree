#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 1;
    for (int i =0; i < n; i++)
    {
        int flag = 0;
        int s, e;
        cin >> s >> e;
        s = s+ 100;
        e = e + 100;
        for (int j = s; j < e; j++)
        {
            arr[j]++;
            if (arr[j] > cnt)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}