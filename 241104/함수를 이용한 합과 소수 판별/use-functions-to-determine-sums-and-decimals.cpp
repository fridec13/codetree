#include <iostream>
using namespace std;

int cnt;

bool IsPrime(int i)
{
	if (i == 1) return false;
	else
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				return false;
			}
		}
	}
	return true;
}

bool IsEven(int i)
{
	if (i == 100) return false;
	if ((i / 10 + i % 10) % 2 == 1) return false;
	return true;
}

bool IsNumber(int i)
{
	return IsPrime(i) && IsEven(i);
}

int main() {
	// 여기에 코드를 작성해주세요.
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (IsNumber(i))
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}