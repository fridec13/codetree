#include <iostream>
#include <algorithm>

using namespace std;

int n;

struct Line
{
    int x1;
    int x2;
    int cross;
};

Line linelist[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for (int i =0; i < n; i++)
    {
        cin >> linelist[i].x1 >> linelist[i].x2;
    }

    for (int i =0; i < n; i++) // 선분을 하나 고른다.
    {
        for (int j = 0; j < n; j++) // 자기자신과 교차를 판단할 이유는 없으므로.
        {
            if ( i == j) continue;
            if ((linelist[i].x1 - linelist[j].x1) * (linelist[i].x2 -linelist[j].x2) < 0) // 교차가 되었다면?
            {
                linelist[i].cross = 1;
                linelist[j].cross = 1;
            } // 두 선분 모두 교차된다.
        }
    }
    int cntzero = 0;
    for (int i = 0; i < n; i++)
    {
        if (linelist[i].cross == 0 ) cntzero++;
    }

    cout << cntzero;

    //두선의 x 좌표 차가 양수 음수이면, 곱이 음수이면.
    //완전탐색해야함.
    // 한 선분에 두개가 교차될 수도 있을까?
    // 최대 100개 밖에 안되니 선분하나 잡고 교차되는 숫자를 세도 될듯.
    
    return 0;
}