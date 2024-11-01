#include <iostream>
using namespace std;

int cnt2;
int cntall;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        cntall++;
        if (input == 2)
        {
            cnt2++;
        }
        if (cnt2 == 3)
        {
            cout << cntall;
            return 0;
        }
    }
    return 0;
}