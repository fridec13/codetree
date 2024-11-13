#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

struct Point
{
    int y;
    int x;
};

Point arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i =0; i <n; i++)
    {
       cin >> arr[i].y >> arr[i].x;
    }
    //직사각형 넓이의 최소
    int area = 0;
    int minarea = 21e8;

    for (int i = 0; i < n; i++) // n개 중 하나의 점을 고른다.
    {
        int ymaxval = -9999999;
        int yminval = 9999999;
        int xmaxval = -9999999;
        int xminval = 9999999;
        for (int j = 0; j < n; j++) // i점을 제외한 나머지를 n-1번 돌린다. 
        {
            if ( i == j ) continue;
            //y축의 최대 최소,
            //x축의 최대 최소를 구해야한다.
            //for문을 돌때마다 최대최소 갱신
            //for문이 끝나면 최대최소를 이용해 넓이 갱신
            ymaxval = max(arr[j].y, ymaxval);
            yminval = min(arr[j].y, yminval);
            xmaxval = max(arr[j].x, xmaxval);
            xminval = min(arr[j].x, xminval);
            // cout << "arr[j].x " << arr[j].x << " arr[j].y " << arr[j].y << "\n";
            
        }
        // printf("yminval = %d \nymaxval = %d \nxminval = %d \nxmaxval = %d \n ", yminval, ymaxval, xminval, xmaxval);
        // if (ymaxval == yminval || xmaxval == xminval) area = 0;
        // else
            area = (ymaxval - yminval) * (xmaxval -xminval);
            // cout << area << "\n";
        minarea = min(minarea, area);

    }
    cout << minarea;

    return 0;
}