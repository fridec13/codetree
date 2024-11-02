#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b,c,d;
    cin >> a>>b;
    c = a + b;
    d = b+a;
    (c == d ) ? cout << "true" : cout << "false";
    return 0;
}