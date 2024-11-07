#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];
int arr2[1000];
int maxcnt = -9999;
int j = 0;

int main() {
	// 여기에 코드를 작성해주세요.
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << 1;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i == 0 || arr[i - 1] != arr[i])
		{
			arr2[j] = i;
			j++;
		}
		if (i == n - 1)
		{
			arr2[j] = n;
		}
	}
	for (int i = 1; i < 1000; i++)
	{
		int space = arr2[i] - arr2[i - 1];
		maxcnt = max(maxcnt, space);
	}
	cout << maxcnt;

	return 0;


}