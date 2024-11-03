#include <iostream>
using namespace std;

int main() {
    char input;
    cin >> input;
    char input1 = input - 1;
    if ( input == 'a')
    {
        input1 = 'z';
    }
    cout << input1;
    return 0;
}