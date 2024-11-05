#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];
int arr2[1000];

int main() {
    // 여기에 코드를 작성해주세요.

    int N;
    cin >> N;
    for (int i = 0; i < 2*N; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr, arr + 2*N);
    sort(arr2, arr2 + 2*N, greater<int>());
    
    int maxval = 0;

    for (int i = 0; i < 2*N; i++)
    {
        int val = arr[i] + arr2[i];
        if (val > maxval)
        {
            maxval = val;
        }
    }

    cout << maxval;

    return 0;
}