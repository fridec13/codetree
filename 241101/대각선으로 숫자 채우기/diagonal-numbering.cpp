#include <iostream>
using namespace std;

int arr[100][100];
int num = 1;

int main() {
	int n, m;
	cin >> n >> m;
	int square = n + m - 2;
	for (int k = 0; k <= square; k++)
	{
		for (int j = 0; j <= k; j++)
		{
			if (j >= n) continue;
			if (k - j >= m) continue;
			arr[j][k - j] = num;
			num++;
			
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

		return 0;
}