#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    int cur = 11 * 24 * 60 + 11 * 60 + 11;
    int goal = a * 24 * 60 + b * 60 + c;

    ( goal - cur < 0) ? cout << -1 : cout << goal - cur;


    return 0;
}