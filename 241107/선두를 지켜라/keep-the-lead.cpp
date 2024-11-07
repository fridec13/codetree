#include <iostream>
#include <algorithm>
using namespace std;

int A[1000000];
int B[1000000];
int Adist;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, M;
    cin >> N >> M;
    // 속도만큼 시간만큼이동
    int cur = 1;

    for (int i = 0; i < N; i++)
    {
        int v, t;
        cin >> v >> t;
        Adist += t;
        while (t--)
        {
            A[cur] = A[cur-1] + v;
            cur++;
        }
    }

    cur = 1;

    for (int i = 0; i < M; i++)
    {
        int v, t;
        cin >> v >> t;
        while (t--)
        {
            B[cur] = B[cur-1] + v;
        }
    }
    int cnt = 0;
    if (A[1] - B[1] != 0) cnt = 1;
    for (int i = 1; i <= Adist; i++)
    {
        if ((A[i-1] - B[i-1]) * (A[i] - B[i]) < 0) cnt++; 
    }
    cout << cnt;
    
    return 0;
}