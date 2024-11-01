#include <iostream>
using namespace std;

int arr[100];

int minval = 9999999;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = i; j <n; j++)
        {
            int differ;
            if ( arr[i] != arr[j]) differ = arr[i] - arr[j];
            if (differ < 0) differ = differ * (-1);

            if (minval > differ)
            {
                minval = differ;
            }
        }
    }
    cout << minval;
    return 0;
}