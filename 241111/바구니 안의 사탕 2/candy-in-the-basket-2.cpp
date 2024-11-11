#include <iostream>
#include <algorithm>

using namespace std;


int A[100];


int main() {
	// 여기에 코드를 작성해주세요.
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int candy;
		int coord;
		cin >> candy >> coord;
		A[coord] = A[coord] + candy;
	}

	int maxval = 0;
	// k == 2 0, 1, 2 부터 탐색해야함. 2가 centor 3 4
	for (int i = k; i <= 200; i++)
	{
		int flag = 0;
		int sum = 0;
		for (int j = i - k; j <= i + k; j++)
		{
			if (i + k > 200)
			{
				flag = 1;
				break;
			}
			sum += A[j];
		}
		if (flag == 1) break;
		maxval = max(maxval, sum);
	}
	cout << maxval;
	return 0;
}