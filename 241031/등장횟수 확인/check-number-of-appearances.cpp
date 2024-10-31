#include <iostream>
using namespace std;

int num;

int main() {
    for (int i =0; i < 5; i++)
    {
        int input;
        cin >> input;
        if (input % 2==0)
        {
            num++;
        }
    }
    cout << num;
    return 0;
}