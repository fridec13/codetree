#include <iostream>
#include <string>
using namespace std;

string input;
string tar;

void FindCnt()
{
    if (input.find(tar) != string::npos)
    {
        int a = input.find(tar);
        cout << a;
    }
    else cout << -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> input >> tar;
    FindCnt();
    return 0;
}