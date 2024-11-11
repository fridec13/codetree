#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int arr[6];

int main() {
    // 여기에 코드를 작성해주세요.
    
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int minval = INT_MAX;

    int diff =0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            for (int k = j+1; k <6; k++)
            {
                int Ateam = arr[i] + arr[j] + arr[k];
                int Bteam = sum - (arr[i] + arr[j] + arr[k]);
                diff = abs(Ateam - Bteam);
            }
            minval = min(minval, diff);
        }
    }
    cout << minval;
    return 0;
}