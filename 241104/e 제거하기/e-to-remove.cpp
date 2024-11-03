#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'e')
        {
            input.erase(i, 1);
            break;
        }
    }
    cout << input;
    return 0;
}