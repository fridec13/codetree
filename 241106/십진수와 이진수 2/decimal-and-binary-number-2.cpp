#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    // string N;
    // cin >> N;
    int num = 0;
    while (true)
    {
        int binary1 = cin.get() - '0';
        if (cin.eof()) break;
        num = num * 2 + binary1;
    }

    num = num * 17;


    int binary[1000] = {};
    int cnt = 0;
    while (true)
    {
        if (num < 2)
        {
            binary[cnt] = num % 2;
            break;
        }

        binary[cnt] = num % 2;
        cnt++;
        num = num/2;
    }
    for (int i = cnt; i >= 0; i--)
    {
        cout << binary[i];
    }


    return 0;
}