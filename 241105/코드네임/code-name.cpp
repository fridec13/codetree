#include <iostream>
using namespace std;

class Agent
{
    public:
        char codename;
        int score;

        Agent()
        {
            codename = ' ';
            score = 0;
        }

        Agent(char codename, int score)
        {
            this->codename = codename;
            this->score = score;
        }
};

Agent a[5];

int main() {
    // 여기에 코드를 작성해주세요.
    int minval = 9999;
    int minidx = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i].codename >> a[i].score;
        if ( minval > a[i].score)
        {
            minval = a[i].score;
            minidx = i;
        }
    }
    cout << a[minidx].codename << " " << a[minidx].score;
    return 0;
}