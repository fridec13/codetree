#include <iostream>
#include <algorithm>

using namespace std;

char alpha[10000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    // 0 5 =  k == 5; 
    for (int i = 0; i < n; i++)
    {
        int idx;
        char gliph;
        cin >> idx >> gliph;
        alpha[idx] = gliph;
    }

    int maxval = -1;

    for (int i = 1; i <= 10000-k+1; i++)
    {
        int sum= 0;
        for (int j = i; j <= i+k; j++)
        {
            if (alpha[j] == 'G')
            {
                sum += 1;
            }
            else if ( alpha[j] == 'H')
            {
                sum += 2;
            }
        }
        maxval = max(maxval, sum);
    }
    cout << maxval;

    return 0;
}