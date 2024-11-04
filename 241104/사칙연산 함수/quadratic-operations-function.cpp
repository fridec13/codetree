#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '*')
    {
        cout << a << " * " << b << " = " << multi(a,b);
    }
    else if (c == '+')
    {
        cout << a << " + " << b << " = " << add(a,b);
    }
    else if (c == '-')
    {
        cout << a << " - " << b << " = " << sub(a,b);
    }
    else if (c == '/')
    {
        cout << a << " / " << b << " = " << divide(a,b);
    }
    else
    {
        cout << "false";
    }

    return 0;
}