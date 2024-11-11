#include <iostream>
#include <algorithm>

using namespace std;

int arr[100];
int arr2[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, h, t;
    cin >> n >> h >> t;
    // 연속하게 T번이상 H 높이로 나오게 한다.
    // 최소비용 올리고 내려서 최소비용.
    // 
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minval = 99999;
    //T번만큼(이게 거리) arr전체를 순회한다.

    for (int i = 0; i <= n-t; i++) //t가 3이면 n이 7일때 6,5, 4 4까지는 i가 돌아야한다.
    {
        int cost = 0;
        for (int j = i; j < i+t; j++)
        {
            if (arr[j] < h)
            {
                cost += h - arr[j];
            }
            else if ( arr[j] > h)
            {
                cost += arr[j] - h;
            }

        }
        minval = min(minval, cost);
    }
    cout << minval;
    return 0;
}