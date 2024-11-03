#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    char fl = input[0];
    char sl = input[1];
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == sl)
        {
            input[i] = fl;
        }
    }
    cout << input;
    return 0;
}