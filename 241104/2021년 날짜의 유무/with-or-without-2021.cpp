#include <iostream>
using namespace std;

int year2021[13] = {
    0, 31, 28, 31,30,31,30,31,31,30,31,30,31
};

bool IsExist(int m, int d)
{
    if ( 1 <= d && d <= year2021[m]) return true;
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    cin >> m >> d;
    if (IsExist(m,d))
    {
        cout << "Yes";
        return 0;
    }
    cout << "No";
    return 0;
}