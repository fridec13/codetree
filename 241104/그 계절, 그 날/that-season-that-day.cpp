#include <iostream>
using namespace std;

bool IsYoon(int Y)
{
    if ( Y % 4 != 0)
    {
        return false;
    }
    if ( Y % 100 == 0)
    {
        if ( Y % 400 == 0)
        {
            return true;
        }
        return false;
    }
    return true;
}

int A[13] = {
    0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int B[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

void YoonDay(int M, int D)
{
    if ( 1 <= D && D <= A[M] )
    {
        if ( 3 <= M && M <= 5) cout << "Spring";
        else if ( 6 <= M && M <= 8) cout << "Summer";
        else if ( 9 <= M && M <= 11) cout << "Fall";
        else if ( 1 <= M && M <= 2 || M == 12) cout << "Winter";
    }
    else cout << -1;
}

void UnYoonDay(int M, int D)
{
    if ( 1 <= D && D <= B[M] )
    {
        if ( 3 <= M && M <= 5) cout << "Spring";
        else if ( 6 <= M && M <= 8) cout << "Summer";
        else if ( 9 <= M && M <= 11) cout << "Fall";
        else if ( 1 <= M && M <= 2 || M == 12) cout << "Winter";
    }
    else cout << -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int Y, M, D;
    cin >> Y >> M >> D;
    if (IsYoon(Y))
    {
        YoonDay(M, D);
    }
    else UnYoonDay(M, D);

    
    return 0;
}