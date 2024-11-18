#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int arr[100];

//유니온 파인드 처럼 풀 수 없을까??


int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxval = -1;

    for (int i = 0; i < n; i++) // 폭탄 하나 선택
    {
        for (int j = 0; j < n; j++) // 이 폭탄이 자신이 아닐때
        {
            int val = -1;
            if ( i == j ) continue;
            int dist = abs(i - j);
            if (arr[i] == arr[j] && dist <= k) // 번호가 같고 거리가 이내라면
            {
                val = arr[i]; // 번호를 기록
            }
            maxval = max(maxval, val);
        }
    }

    cout << maxval;
    
    return 0;
}