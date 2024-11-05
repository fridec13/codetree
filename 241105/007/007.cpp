#include <iostream>
#include <string>

using namespace std;

class input
{
    public:
        string code;
        char Point;
        int time;

        input()
        {
            code = "";
            Point = ' ';
            time = 0;
        }

        input(string c, char p, int t)
        {
            this->code = c;
            this->Point = p;
            this->time = t;
        }
};

input a;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a.code >> a.Point >> a.time;

    cout << "secret code : " << a.code << "\n" << "meeting point : " << a.Point << "\n" << "time : " << a.time;

    return 0;
}