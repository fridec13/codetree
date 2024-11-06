#include <iostream>
#include <string>
using namespace std;

int main() {
	// 여기에 코드를 작성해주세요.
	int a, b;
	string N;
	cin >> a >> b >> N;
	int num = 0;
	for (int i = 0; i < N.length(); i++)
	{
		int seed = N[i] - '0';
		num = num * a + seed;
	}
	int cnt = 0;
	int converted[1000] = {};
	while (true)
	{
		if (num < b)
		{
			converted[cnt] = num % b;
			break;
		}

		converted[cnt] = num % b;
		cnt++;

		num = num / b;
	}

	for (int i = cnt; i >= 0; i--)
	{
		cout << converted[i];
	}
	return 0;
}