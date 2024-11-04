#include <iostream>
#include <algorithm>
using namespace std;

int FindMin(int a, int b, int c)
{
    int d = min(a, c);
    int e = min(b, d);
    return e;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << FindMin(a,b,c);
    return 0;
}