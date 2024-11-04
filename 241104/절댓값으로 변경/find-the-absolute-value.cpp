#include <iostream>
using namespace std;

int arr[50];

void MakeAbs(int arr[], int i)
{
    if (arr[i] < 0)
    {
        arr[i] = arr[i] * (-1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        MakeAbs(arr, i);
        cout << arr[i] << " ";
    }
    return 0;
}