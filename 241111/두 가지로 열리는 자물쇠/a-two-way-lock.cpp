#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n;
int arr[3];
int key1[3];
int key2[3];

// 원형 자물쇠임 // 나머지 연산
int circular(int key, int j) 
{
    int diff[4] = {0};
    diff[0] = -1;
    diff[1] = -1;
    diff[2] = -1;
    diff[3] = -1;

    for (int i = 0; i < n; i++) 
    {
        if (j + i == key) 
        {
            diff[0] = i;
            break;
        }
        if ((j + i) % n == key) 
        {
            diff[1] = i;
            break;
        }
    }

    for (int i = 0; i < n; i++) 
    {
        if (j - i == key) 
        {
            diff[2] = i;
            break;
        }
        if ((j - i + n) % n == key) 
        { // 음수 나머지 방지
            diff[3] = i;
            break;
        }
    }

    // diff 배열에서 유효한 값의 최소값을 찾음
    int minval = n; // 초기값을 충분히 큰 값으로 설정
    for (int i = 0; i < 4; i++) 
    {
        if (diff[i] != -1) 
        {
            minval = min(minval, diff[i]);
        }
    }

    return minval;
}

int main() 
{
    cin >> n;

    for (int i = 0; i < 3; i++) 
    {
        cin >> key1[i];
    }
    for (int i = 0; i < 3; i++) 
    {
        cin >> key2[i];
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            for (int k = 1; k <= n; k++) 
            {
                int key11 = circular(key1[0], i);
                int key12 = circular(key1[1], j);
                int key13 = circular(key1[2], k);

                int key21 = circular(key2[0], i);
                int key22 = circular(key2[1], j);
                int key23 = circular(key2[2], k);

                if (key11 <= 2 && key12 <= 2 && key13 <= 2) 
                {
                    cnt++;
                } 
                else if (key21 <= 2 && key22 <= 2 && key23 <= 2) 
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}