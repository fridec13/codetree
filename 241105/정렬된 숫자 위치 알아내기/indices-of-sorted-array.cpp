#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct arr
{
    int ele;
    int idx;
};

arr a[1000];
int rant_to[1000];

bool cmp(arr a, arr b)
{
    if (a.ele == b.ele)
    {
        return a.idx < b.idx;
    }
    return a.ele < b.ele;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ele;
        a[i].idx = i + 1;
    }
    sort(a, a+n, cmp);

    int j = 1;

    for (int i = 0; i < n; i++)
    {
        rant_to[i] = a[i].idx;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + 1 == rant_to[j])
            {
                cout << j +1 << " ";
                break;
            }
        }
    }


    return 0;
}