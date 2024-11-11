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
    for (int i = 0; i <= n-m -1; i++) // A의 시작점 선택 38 37 35까지 i가 돌아야함. 39 - 3 36임. 
    {
        int check[100]= {0};
        int flag = 0;
        for (int j = i; j <= i+m-1; j++) // j는 시작점 부터 +m까지 확인.0, 1, 2까지
        {
            // 확인할 숫자 하나.
            for (int k = 0; k < m; k++) // B[0] 2 B[1] 5 B[2] 2;
            {
                if (check[k] == 1) continue; //이미 체크가 된 거면 패스,
                if (A[j] == B[k] ) // 고른 숫자가 B[0]과 같다면 0을 1로 바꿈, 다음으로 고른 숫자가 B[2] 와 같다면 check[2] = 1로 바꿈.
                {
                    check[k]++;// 다시 생각해야함.
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