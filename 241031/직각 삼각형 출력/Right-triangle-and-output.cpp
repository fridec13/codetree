#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k <= j*2; k++)
        {
            cout << '*';
        }
        cout << "\n";
    }
    return 0;
}