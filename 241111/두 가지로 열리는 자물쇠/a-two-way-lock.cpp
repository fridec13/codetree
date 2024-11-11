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
    int right = (key - j + n) % n;
    int left = (j - key + n) % n;
    return min(right, left);
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

                if (key11 <= 2 && key12 <= 2 && key13 <= 2 || key21 <= 2 && key22 <= 2 && key23 <= 2) 
                {
                    cnt++;
                } 
            }
        }
    }
    cout << cnt;

    return 0;
}