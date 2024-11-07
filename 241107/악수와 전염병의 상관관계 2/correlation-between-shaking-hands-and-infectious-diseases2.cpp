#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int checked[101];

struct Dev
{
    int t;
    int x;
    int y;
};

class Person
{
    public:
        int contatime;
        int judgeconta;

        Person()
        {
            contatime = -1;
            judgeconta = 0;
        }

        Person(int contatime, int judgeconta)
        {
            this->contatime = contatime;
            this->judgeconta = judgeconta;
        }

};

Person A[101];

Dev timelist[251];

bool cmp(Dev a, Dev b)
{
    return a.t < b.t;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K, P, T; // 전체개발자수, 감염기간, 최초감염자 번호, 악수 사건 수;
    cin >> N >> K >> P >> T; // K가 마이너스로 향할 듯.

    A[P].contatime = K;
    A[P].judgeconta = 1;

    for (int i = 0; i < T; i++)
    {
        cin >> timelist[i].t >> timelist[i].x >> timelist[i].y;
    }
    sort(timelist, timelist + T, cmp);

    int firstconta = 0;
    for (int i = 0; i < T; i++)
    {
        if ( A[timelist[i].x].contatime > 0)
        {
            (A[timelist[i].y].judgeconta == 0) ? A[timelist[i].y].contatime = K : A[timelist[i].y].contatime--;
            A[timelist[i].y].judgeconta = 1;
            A[timelist[i].x].contatime--;
        }
        else if ( A[timelist[i].y].contatime > 0)
        {
            (A[timelist[i].x].judgeconta == 0) ? A[timelist[i].x].contatime = K : A[timelist[i].x].contatime--;
            A[timelist[i].x].judgeconta = 1;
            A[timelist[i].y].contatime--;
        }
        
    }

    for (int i = 1; i <= N; i++)
    {
        cout << A[i].judgeconta;
    }

    return 0;
}