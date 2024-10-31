#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    int sub = n;
    while (sub > 0)
    {
        sub = sub / i;
        i++;

    }
    cout << i - 1;

    return 0;
}