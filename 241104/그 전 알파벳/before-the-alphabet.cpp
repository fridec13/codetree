#include <iostream>
using namespace std;

int main() {
    char input;
    cin >> input;
    char input1 = input - 1;
    if ( input == 'z')
    {
        input1 = 'a';
    }
    cout << input1;
    return 0;
}