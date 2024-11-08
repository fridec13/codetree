#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

struct Cow
{
    int num;
    int height;
};

Cow A[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        A[i].num = i;
        cin >> A[i].height;
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i +1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ( A[i].height <= A[j].height && A[j].height <= A[k].height)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}