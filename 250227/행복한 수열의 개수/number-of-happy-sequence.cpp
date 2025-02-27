#include <iostream>

using namespace std;

int lastnum;
int cntnum;
int cntline;
int n, m;
int grid[100][100];
bool flagline = false;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i= 0; i < n; i++)
    {
        flagline = false;
        lastnum = 0;
        for (int j = 0; j <n; j++)
        {
            if (lastnum == grid[i][j])
            {
                cntnum++;
            }
            else if (lastnum != grid[i][j])
            {
                cntnum = 1;
            }
            if (cntnum == m)
            {
                flagline = true;
                break;
            }
            lastnum = grid[i][j];
        }
        if (flagline == true)
        {
            cntline++;
        }
    }

    lastnum = 0;

    for (int j = 0; j < n; j++)
    {
        flagline = false;
        lastnum = 0;
        for (int i = 0; i < n; i++)
        {
            if (lastnum == grid[i][j])
            {
                cntnum++;
            }
            else if ( lastnum != grid[i][j])
            {
                cntnum = 1; 
            }
            if (cntnum == m)
            {
                flagline = true;
                break;
            }
            lastnum = grid[i][j];
        }
        if (flagline == true)
        {
            cntline++;
        }
    }

    cout << cntline;
    
    // Please write your code here.

    return 0;
}
