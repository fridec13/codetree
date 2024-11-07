#include <iostream>
using namespace std;

int cur = 1000;
int arr[2000][2000];

int cntexist;
int cntremove;

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 2; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for ( int i = y1+cur; i < y2+cur; i++)
        {
            for ( int j = x1+cur; j < x2+cur; j++)
            {
                arr[i][j] = 1;
                cntexist++;
            }
        }
        
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = y1+cur; i < y2+cur; i++)
    {
        for (int j = x1+cur; j < x2+cur; j++)
        {
            if (arr[i][j])
            {
                arr[i][j] = 0;
                cntremove++;
            }
            
        }
    }

    cout << cntexist - cntremove;
    return 0;
}