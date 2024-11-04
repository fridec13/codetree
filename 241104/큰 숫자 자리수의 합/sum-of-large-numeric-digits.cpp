#include <iostream>
using namespace std;

int func(int num)
{
	if (num < 10)
	{
		return num;
	}

	return func(num / 10) + num % 10;
}

int main() {
    // 여기에 코드를 작성해주세요.
	int a, b, c;
	cin >> a >> b >> c;
	int num = a*b*c;
	cout << func(num);
    return 0;
}