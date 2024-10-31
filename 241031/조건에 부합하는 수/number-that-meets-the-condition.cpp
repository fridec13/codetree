#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i =0; i <= a; i++)
    {
        int flag = 0;
        if (i % 2 == 0 && i % 4)
        {
            flag = 1;
        }
        else if ((i / 8) % 2 == 0)
        {
            flag = 1;
        }

        else if (i % 7 < 4)
        {
            flag = 1;
        }

        if (flag == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}