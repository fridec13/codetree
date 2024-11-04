#include <iostream>
using namespace std;

int F(int N)
{
	if (N == 1)
	{
		return 1;
	}
	else if (N == 2)
	{
		return 2;
	}

	if (N % 2 == 1)
	{
		return F(N - 2) + N;
	}
	else if (N % 2 == 0)
	{
		return F(N - 2) + N;
	}
}

int main() {
	// 여기에 코드를 작성해주세요.
	int N;
	cin >> N;
	cout << F(N);
	return 0;
}