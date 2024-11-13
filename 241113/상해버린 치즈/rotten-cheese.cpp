#include <iostream>
using namespace std;

struct People
{
    int eattime;
    int illtime;
};

struct Cheese
{
    People peoplelist[100];
    bool mayberotten;
};

Cheese Cheeselist[51];

int checkill[51];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, d, s;
    cin >> n >> m >> d >> s;
    
    for (int i =0; i < d; i++)
    {
        int p, m, t;
        cin >> p >> m >> t;
        Cheeselist[m].peoplelist[p].eattime = t;
    }

    for (int i = 0; i < s; i++)
    {
        int p, t;
        cin >> p >> t;
        for (int j = 0; j < m; j++)
        {
            if ( Cheeselist[j].peoplelist[p].eattime > 0)
            {
                Cheeselist[j].peoplelist[p].illtime = t;
            }
        }
    }

    for (int i =1; i <= m; i++) // 상한 치즈는 단하나임.
    {
        bool flag  = true;
        for (int j = 1; j <= n; j++)
        {
            if (Cheeselist[i].peoplelist[j].eattime == 0 ) continue;

            else if (Cheeselist[i].peoplelist[j].eattime > 0 && Cheeselist[i].peoplelist[j].illtime > 0)
            {
                if (Cheeselist[i].peoplelist[j].eattime >= Cheeselist[i].peoplelist[j].illtime)
                {
                    continue;
                }
                else if (Cheeselist[i].peoplelist[j].illtime >= Cheeselist[i].peoplelist[j].eattime)
                {
                    Cheeselist[i].mayberotten = true;
                }
            }
        }
    }
    int cntcheese[51] = {};
    for (int i = 1; i <= m; i++)
    {
        // if ( i == 1)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         if ( Cheeselist[i].peoplelist[j].eattime > 0)
        //         {
        //             cout << i << " " << j << "\n";
        //         }
        //     }
        // }
        if (Cheeselist[i].mayberotten)
        {
            for (int j = 1; j <= n; j++)
            {
                if ( Cheeselist[i].peoplelist[j].eattime > 0)
                {
                    // cout << i << j << " ";
                    cntcheese[i]++;
                }
            }
        }
    }


    // cout << "\n";
    int maxcnt = 0;
    for (int i =1; i <= m; i++)
    {
        maxcnt = max(maxcnt, cntcheese[i]);
    }

    cout << maxcnt;
    
    return 0;
}