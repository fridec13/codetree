#include <iostream>
#include <algorithm>
using namespace std;

int arr[100];

int F(int n)
{

	if (n == 0) return arr[0];

	int dividenum;
	int maxmulti = F(n - 1);
	if (maxmulti > arr[n])
	{
		for (int i = maxmulti; i <= maxmulti*arr[n]; i++)
		{
			if (i % arr[n] == 0 && i % maxmulti == 0)
			{
				return i;
			}
		}
	}
	else
	{
		for (int i = arr[n]; i <= maxmulti*arr[n]; i++)
		{
			if (i % arr[n] == 0 && i % maxmulti == 0)
			{
				return i;
			}
		}

	}


	//0 ~ n-1번째까지의 최소 공배수와 n사이의 최소공배수

}

int main() {
	// 여기에 코드를 작성해주세요.
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << F(n - 1);

	return 0;
}