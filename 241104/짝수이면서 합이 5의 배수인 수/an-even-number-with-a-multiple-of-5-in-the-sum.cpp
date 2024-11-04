#include <iostream>
#include <string>
using namespace std;

bool MagicNumber(int i)
{
    string a = to_string(i);
    int num1 = a[0] - '0';
    int num2 = a[1] - '0';
    int fivemulti = num1 + num2;


    return i % 2 ==0 && fivemulti % 5 == 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if (MagicNumber(n))
    {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}