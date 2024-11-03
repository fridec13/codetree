#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b, c, d;
    c = "";
    d = "";
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if ('A' > a[i] || a[i] > 'z')
        {
            c = c + a[i];
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if ('A' > b[i] || b[i] > 'z')
        {
            d = d + b[i];
        }
    }
    int c1, d1;
    c1 = stoi(c);
    d1 = stoi(d);
    cout << c1 + d1;
    return 0;
}