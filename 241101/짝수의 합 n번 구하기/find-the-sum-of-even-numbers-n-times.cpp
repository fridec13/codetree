#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (j % 2 == 0)
            {
                sum += j;
            }

        }
        cout << sum << "\n";
    }
    
    return 0;
}