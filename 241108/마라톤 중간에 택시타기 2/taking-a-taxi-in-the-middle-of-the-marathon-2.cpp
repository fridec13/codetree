#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

struct Coord
{
    int x;
    int y;
};

//하나만 건너 뛴다.
//지금까지는 있는 것을 방문했으나
//이번에는 방문하지 않을 것을 for문으로 돌려야한다.
// 1번과 마지막은 돌지 않는다.

Coord A[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int minval = INT_MAX;
    for (int i =1; i<= n; i++)
    {
        cin >> A[i].x >> A[i].y;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << A[i].x << " " << A[i].y << "\n";
    // }
    int cur = 1;
    

    for (int i = 2; i < n; i++) // 건너뛸 체크포인트 선택
    {
        int sum = 0;
        int cur = 1;
        for (int j = 2; j <= n; j++) // 나머지 체크포인트 확인.
        {   
            if ( i != j)
            {
                int ny = A[j].y;
                int nx = A[j].x;
                int cury = A[cur].y;
                int curx = A[cur].x;
                int dist = abs(A[cur].y - A[j].y) + abs(A[cur].x - A[j].x);
                sum += dist;
                cur = j;
            }
            else if ( j == i )
            {
                continue;
            }
        }
        minval = min(sum, minval);   

    }

    cout << minval;

    return 0;
}