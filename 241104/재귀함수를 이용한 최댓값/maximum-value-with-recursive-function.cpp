#include <iostream>
using namespace std;

int arr[100];
int n;



int F(int n)
{
	if (n == 1)
	{
		return arr[0];
	}

	int premax = F(n-1);

	return (premax <= arr[n-1]) ? arr[n-1] : premax;
}

int main() {
	// 여기에 코드를 작성해주세요.
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << F(n); //n개중 최대값 출력
	return 0;
}