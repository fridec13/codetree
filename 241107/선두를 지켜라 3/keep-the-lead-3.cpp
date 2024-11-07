#include <iostream>
#include <algorithm>

using namespace std;

int A[10000000];
int B[10000000];

int curA = 1;
int curB = 1;

int aall = 0;
int ball = 0;


int main() {
    // 여기에 코드를 작성해주세요.

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int v, t;
        cin >> v >> t;
        aall += t;
        while (t--)
        {
            A[curA] = A[curA -1] + v;
            curA++;
        }
    }

    for (int i = 0; i < M; i++)
    {
        int v, t;
        cin >> v >> t;
        ball += t;
        while (t--)
        {
            B[curB] = B[curB - 1] + v;
            curB++;
        }
    }

    int cnt = 0;
    char honer = ' ';
    for (int i = 1; i <= aall; i++)
    {
        // cout << A[i] << " " << B[i] << "\n";

        if (A[i] > B[i])
        {
            if ( honer == 'A') continue;
            honer = 'A';
            cnt++;
        }
        else if (B[i] > A[i])
        {
            if ( honer == 'B') continue;
            honer = 'B';
            cnt++;
        }
        else if ( A[i] == B[i])
        {
            if ( honer == 'C' ) continue;
            honer = 'C';
            cnt++;
        }
        // cout << honer << "\n";

    }

    cout << cnt;
    return 0;
}