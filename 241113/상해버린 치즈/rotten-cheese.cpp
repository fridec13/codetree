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

    for (int i =1; i <= m; i++) // 만약 i치즈가 상한치즈라면,
    {
        for (int j = 1; j <= n; j++)
        {
            if (Cheeselist[i].peoplelist[j].eattime == 0 ) continue;
            if (Cheeselist[i].peoplelist[j].eattime >= Cheeselist[i].peoplelist[j].illtime) continue;

            if (Cheeselist[i].peoplelist[j].eattime > 0)
            {
                if (Cheeselist[i].peoplelist[j].illtime == Cheeselist[i].peoplelist[j].eattime + 1)
                {
                    Cheeselist[i].mayberotten = true;
                }
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        if (Cheeselist[i].mayberotten = true)
        {
            for (int j = 1; j <= n; j++)
            {
                if ( Cheeselist[i].peoplelist[j].eattime > 0)
                {
                    checkill[j] = 1;
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (checkill[i] == 1)
        {
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}