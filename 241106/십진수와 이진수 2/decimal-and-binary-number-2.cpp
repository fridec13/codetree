#include <iostream>
#include <string>
using namespace std;

int main() {
	// 여기에 코드를 작성해주세요.
	string N;
	cin >> N;
	int num = 0;
	for (int i = 0; i < N.length(); i++)
	{
		int a = N[i] - '0';
		num = num * 2 + a;
	}

	num = num * 17;


	int binary[1000] = {};
	int cnt = 0;
	while (true)
	{
		if (num < 2)
		{
			binary[cnt] = num % 2;
			break;
		}

		binary[cnt] = num % 2;
		cnt++;
		num = num / 2;
	}
	for (int i = cnt; i >= 0; i--)
	{
		cout << binary[i];
	}


	return 0;
}