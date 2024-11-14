#include <iostream>
#include <algorithm>

using namespace std;



int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin >> x >> y;
    int maxval = -1234;

    for (int i = x; i <= y; i++)
    {
        int num = i;
        int sum = 0;
        while (true)
        {
            int ref = num % 10;
            sum += ref;
            if ( num < 10) break;
            num /= 10;
        }
        maxval = max(sum, maxval);
    }
    cout << maxval;
}