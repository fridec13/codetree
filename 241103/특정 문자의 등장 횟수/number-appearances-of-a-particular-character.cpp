#include <iostream>
#include <string>
using namespace std;

int a, b;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    

    for (int i = 0; i < input.length()-1; i++)
    {
        if (input[i] == 'e' && input[i+1] == 'e' )
        {
            a++;
        }
        if (input[i] == 'e' && input[i+1] == 'b')
        {
            b++;
        }

    }
    cout << a << " " << b;

    return 0;
}