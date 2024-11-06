#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num = 0;
    for (int i = 0; i < 9; i++)
    {
        int binary = cin.get() - '0';
        if (cin.eof()) break;
        num = num * 2 + binary;

    }

    cout << num;

    return 0;
}