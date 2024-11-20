#include <iostream>
using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (true)
        {
            if (j >= 0 && arr[j] > key)
            {
                arr[j+1] = arr[j];
                arr[j] = key;
                j--;
            }
            else break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}