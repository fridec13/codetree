#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for ( int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxval = INT_MIN;
    for (int i = 0; i < n; i++) // 하나의 숫자를 고른다.
    {
        int dist = 0;
        for (int j = 0; j < n; j++) // 인접한 숫자가 아니면 합을 저장한다.
        {
            if ( i != j && j != i -1 && j != i + 1)
            {
                maxval = max(maxval, arr[i] + arr[j]);
            }
        }
    }

    cout << maxval;
    return 0;
}