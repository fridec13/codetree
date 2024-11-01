#include <iostream>
using namespace std;

int DAT[10];
int sum;

int main() {
    int a, b;
    cin >> a >> b;
    
    while (true)
    {
        if (a <= 1)
        {
            break;
        }
        DAT[a % b]++;
        a = a/b;
    }

    for (int i =0; i < 10; i++)
    {
        sum = sum + DAT[i]*DAT[i];
    }

    cout << sum;

    return 0;
}