#include <iostream>
#include <algorithm>

using namespace std;

struct People
{
    int idx;
    char gliph;
};

bool cmp(People a, People b)
{
    return a.idx < b.idx;
}

People A[100];


int main()
{
    int n;
    cin >> n;
    for (int i =0; i< n; i++)
    {
        int idx;
        char gliph;

        cin >> A[i].idx >> A[i].gliph;
    }

    sort(A, A+n, cmp);
    int maxval = -1;
    for (int i = 0; i < n-1; i++) // 첫번째 사람 선택
    {
        for (int j = i+1; j < n; j++) // 두번째 사람 선택
        {
            int cntG  = 0;
            int cntH  = 0;
            int area = 0;
            for (int k = i; k <= j; k++) // 구간 탐색
            {
                // cout << k << " ";
                if (A[k].gliph == 'G') cntG++;
                if (A[k].gliph == 'H') cntH++;
            }
            // cout << "\n";     
            if (cntG == cntH) area = A[j].idx - A[i].idx;
            else if (cntG == 0 && cntH > 0) area = A[j].idx - A[i].idx;
            else if (cntH == 0 && cntG > 0) area = A[j].idx - A[i].idx;

            // cout << "area : " << area << "\n";

            maxval = max(maxval, area);
        }
    }

    (maxval == -1) ? cout << 0 : cout << maxval;

    return 0;
}
// 0,
// 1, 3, 4, 7, 10, 16
// G, H, G, G, H,  G
// 3-1