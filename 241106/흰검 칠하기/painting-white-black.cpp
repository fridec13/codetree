#include <iostream>
using namespace std;

int arr[1000][3];

int main() {
	// 여기에 코드를 작성해주세요.

	int cur = 500; // 오프셋
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int dist;
		char dir;
		cin >> dist;
		cin >> dir;
		dist = dist - 1;

		if (dir == 'L')
		{
			for (int i = cur; i >= cur - dist; i--)
			{
				arr[i][0]++;
				arr[i][2] = 1;
				if (arr[i][1] >= 2 && arr[i][0] >= 2)
				{
					arr[i][2] = 3;
				}
			}
			cur = cur - dist;
		}

		else if (dir == 'R')
		{

			for (int i = cur; i <= cur + dist; i++)
			{
				arr[i][1]++;
				arr[i][2] = 2;
				if (arr[i][1] >= 2 && arr[i][0] >= 2)
				{
					arr[i][2] = 3;
				}
				
			}
			cur = cur + dist;
			
		}
	}

	int cntw = 0;
	int cntb = 0;
	int cntg = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (arr[i][2] == 1) cntw++;
		else if (arr[i][2] == 2) cntb++;
		else if (arr[i][2] == 3) cntg++;
	}

	cout << cntw << " " << cntb << " " << cntg;
	return 0;
}