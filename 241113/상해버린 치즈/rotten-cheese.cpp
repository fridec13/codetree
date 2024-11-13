#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct People 
{
    int eattime;
    int illtime;
};

struct Cheese 
{
    People peoplelist[101];
    bool mayberotten;
};

Cheese Cheeselist[51];

int main() 
{
    int n, m, d, s;
    cin >> n >> m >> d >> s;
    
    for (int i = 0; i < d; i++) 
    {
        int p, m, t;
        cin >> p >> m >> t;
        Cheeselist[m].peoplelist[p].eattime = t;
    }

    for (int i = 0; i < s; i++) 
    {
        int p, t;
        cin >> p >> t;
        Cheeselist[0].peoplelist[p].illtime = t;
    }

    int maxSick = 0;
    for (int i = 1; i <= m; i++) 
    {
        vector<int> sickPeople;
        for (int j = 1; j <= n; j++) 
        {
            if (Cheeselist[i].peoplelist[j].eattime > 0 && 
                Cheeselist[0].peoplelist[j].illtime > Cheeselist[i].peoplelist[j].eattime) 
            {
                sickPeople.push_back(j);
            }
        }
        
        if (sickPeople.size() == s)
        {
            int count = 0;
            for (int j = 1; j <= n; j++) 
            {
                if (Cheeselist[i].peoplelist[j].eattime > 0) 
                {
                    count++;
                }
            }
            maxSick = max(maxSick, count);
        }
    }

    cout << maxSick;
    return 0;
}