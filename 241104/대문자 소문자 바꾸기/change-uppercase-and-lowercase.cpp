#include <iostream>
#include <cctype>
using namespace std;

char input[20];

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 20; i++)
    {
        cin >> input[i];
        if ('A' <= input[i] && input[i] <= 'Z')
        {
            input[i] = tolower(input[i]);
            cout << input[i];
        }
        else if ('a' <= input[i] && input[i] <= 'z')
        {
            input[i] = toupper(input[i]);
            cout << input[i];

        }
        else if (input[i] == '\0') break;
    }



    
    return 0;
}