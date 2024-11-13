#include <iostream>
#include <algorithm>


using namespace std;

int n;
//한명이라도 일하면 '운행'
//한명을 해고,
//운행되고 있는 시간이 최대
//end -1 까지 일함.
//면적임.
//시간 계산은 4-1, 9-5처럼되어있음.

//걸치는것은 겹치는 것인가?

// 1-4 까지 4-9로하면 겹치나?
// 1-4 5-9 이면 1-2 2-3 3-4  4 -5  5-6 6-7 7-8 8-9 와 같이 되어 1 1 1 0 1 1 1 1 로 나옴.
// end-1까지만 넣으면 될듯.

int timeline[1000]; // for문안에 넣어야함.

struct Dev
{
    int start;
    int end;
};

Dev A[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i =0; i < n; i++)
    {
        cin >> A[i].start >> A[i].end;
    }

    int maxcnt = -21e8;

    for (int i = 0; i < n; i++) // 해고할 사람 한명 고름.
    {
        int timeline[1000] = {};
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if ( i == j ) continue;

            for (int k = A[j].start; k < A[j].end; k++)
            {
                timeline[k]++;
            }
            //j for문이 전부 돌아야 timeline 완성
        }
        for (int q = 0; q < 1000; q++)
        {
            if (timeline[q]) cnt++;
        }
        //cnt를 다 세면 최대값 찾음.

        maxcnt = max(cnt, maxcnt);
    }
    cout << maxcnt;

    return 0;
}