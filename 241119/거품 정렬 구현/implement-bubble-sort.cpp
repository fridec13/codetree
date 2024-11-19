#include <iostream>
using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool sorted = false;
    while (sorted == false)
    {
        sorted = true;
        for (int i = 0; i < n-1; i++)
        {
            if ( arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sorted = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}