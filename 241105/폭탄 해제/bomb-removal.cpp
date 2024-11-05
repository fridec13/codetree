#include <iostream>
#include <string>
using namespace std;

class Answer
{
    public:
        string code;
        char color;
        int second;

        Answer()
        {
            code = "";
            color = ' ';
            second = 0;
        }

        Answer(string code, char color, int second)
        {
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Answer a;
    cin >> a.code >> a.color >> a.second;
    cout << "code : " << a.code << "\ncolor : " << a.color << "\nsecond : " << a.second;
    return 0;
}