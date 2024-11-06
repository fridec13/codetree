#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < K; i++)
    {
        int s, e;
        cin >> s >> e;
        for ( int j = s; j <= e; j++)
        {
            arr[j]++;
        }
    }
    int maxval = -9999;
    for (int i = 0; i < N; i++)
    {
        maxval = max(maxval, arr[i]);
    }

    cout << maxval;

    return 0;
}