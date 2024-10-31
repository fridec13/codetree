#include <iostream>
using namespace std;

int main() {
    int flag = 0; 
    for (int i = 0; i < 5; i++)
    {
        flag = 0;
        int n;
        cin >> n;
        if (n % 3 != 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << 0;
    }
    else cout << 1;

    return 0;
}