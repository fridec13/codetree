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
        cin >> arr[i];
        if (i % 2 == 0)
        {
            sort(arr, arr + i + 1);
            cout << arr[i/2] << " ";
        }
    }
    return 0;
}