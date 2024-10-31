#include <iostream>
using namespace std;

int multi = 1;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        if ( i % a == 0)
        {
            multi *= i;
        }
    }
    cout << multi;
    return 0;
}