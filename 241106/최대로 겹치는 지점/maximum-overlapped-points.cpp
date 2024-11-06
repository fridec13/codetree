#include <iostream>
#include <algorithm>

using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        for (int j = s; j <= e; j++)
        {
            arr[j]++;
        }
    }
    int maxval = -9999;
    for (int i =0; i < 100; i++)
    {
        maxval = max(maxval, arr[i]);
    }

    cout << maxval;
    return 0;
}