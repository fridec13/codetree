#include <iostream>
using namespace std;

int n, m;
int arr[100];
int sum;

void func()
{
	while (m != 1)
	{
		sum = sum + arr[m-1];
		if (m % 2 == 1)
		{
			m = m - 1;
		}
		else
		{
			m = m / 2;
		}
	}
	sum += arr[0];
}

int main() {
	// 여기에 코드를 작성해주세요.
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	func();
	cout << sum;
	return 0;
}