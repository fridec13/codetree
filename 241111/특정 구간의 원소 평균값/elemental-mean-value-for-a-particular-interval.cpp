#include <iostream>
#include <algorithm>

using namespace std;
int n;
int arr[100];

int main() {
	// 여기에 코드를 작성해주세요.
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			double avg = 0;
			int sum = 0;

			for (int k = i; k <= j; k++)
			{
				sum += arr[k];
			}
			double num = j - i + 1;
			avg = sum / num;

			for (int k = i; k <= j; k++)
			{
				if (avg == arr[k])
				{
					cnt++;
					break;
				}
			}
		}
	}

	cout << cnt;

	return 0;
}