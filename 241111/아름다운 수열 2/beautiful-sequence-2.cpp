#include <iostream>
#include <algorithm>

using namespace std;

int A[100];
int B[100];


int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i =0; i < m; i++)
    {
        cin >> B[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) // A의 시작점 선택
    {
        int check[100]= {};
        int flag = 0;
        for (int j = i; j < i+m; j++) // j는 시작점 부터 +m까지 확인.
        {
            // 확인할 숫자 하나.
            for (int k = 0; k < m; k++)
            {
                if (A[j] == B[k])
                {
                    check[k]++;
                }
            }
        }
        for (int l = 0; l < m; l++)
        {
            if (check[l] != 1)
            {
                flag = 1;
                break;
            }
        }
        if ( flag == 0)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}