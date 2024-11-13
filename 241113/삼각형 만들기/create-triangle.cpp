#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point
{
    int y;
    int x;
};

Point arr[100];
Point Line[3];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i =0; i < n; i++)
    {
        cin >> arr[i].y >> arr[i].x;
    }
    int maxarea = -21e8;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                Line[0] = { arr[i].y - arr[j].y, arr[i].x - arr[j].x};
                Line[1] = { arr[j].y - arr[k].y, arr[j].x - arr[k].x};
                Line[2] = { arr[k].y - arr[i].y, arr[k].x - arr[i].x};

                //for문을 돌 때마다 점이 달라짐.
                
                int cnty = 0;
                int cntx = 0;
                for (int l = 0; l < 3; l++)
                {
                    if (Line[l].y == 0) cnty++;
                    if (Line[l].x == 0) cntx++;
                }

                // cout << cnty << " " << cntx << "\n";

                if ( cnty != 1 || cntx != 1) continue;

                int miny = min(arr[i].y, min(arr[j].y, arr[k].y));
                int maxy = max(arr[i].y, max(arr[j].y, arr[k].y));
                int minx = min(arr[i].x, min(arr[j].x, arr[k].x));
                int maxx = max(arr[i].x, max(arr[j].x, arr[k].x));

                

                int area = (maxy - miny) * (maxx - minx);
                
                // cout << "area : " << area << "\n";
                
                maxarea = max(area, maxarea);
                
            }
        }
    }

    if ( maxarea == -21e8) cout << 0;
    else cout << maxarea;

    return 0;
}