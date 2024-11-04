#include <iostream>
using namespace std;

bool IsYoon(int y)
{
    if ( y % 4 != 0)
    {
        return false;
    }
    if ( y % 100 == 0 && y % 400 != 0)
    {
        return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    (IsYoon(y)) ? cout << "true" : cout << "false";
    return 0;
}