#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point
{
    int x;
    int y;
    int num;
};

bool cmp(Point a, Point b)
{
    return abs(a.x - 0) + abs(a.y - 0) < abs(b.x - 0) + abs(b.y - 0);
}

Point a[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y;
        a[i].num = i+1;
    }
    sort(a, a +n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].num << "\n";
    }
    return 0;
}