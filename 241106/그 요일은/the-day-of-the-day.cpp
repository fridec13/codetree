#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int date[13] = {
        0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    string yoil_list[7] = {
        "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"
    };

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string yoil_goal;
    cin >> yoil_goal;

    int goalyoilidx = 0;
    for (int i = 0; i < 7; i++)
    {
        if (yoil_list[i] == yoil_goal)
        {
            goalyoilidx = i;
        }
    }
    int month = m1;
    int day = d1;
    int cntyoil = 0;
    int yoil = 1;

    while (true)
    {
        if (yoil > 6)
        {
            yoil = 0;
        }

        if (yoil_list[yoil] == yoil_list[goalyoilidx])
        {
            cntyoil++;
        }

        if (month == m2 && day == d2)
        {
            cout << cntyoil -1;
            break;
        }
        
        if (day > date[month])
        {
            month++;
            day = 1;
            continue;
        }
        
        day++;
        yoil++;


    }
    return 0;
}