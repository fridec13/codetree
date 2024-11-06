#include <iostream>
using namespace std;

int arr[10000][3];
//검정 / 흰색 / 회색
//검정, 흰색
// 회색은 1, 흰색은 2, 검정은 3;
//0번 타일 부터 시작해서

int main() {
	// 여기에 코드를 작성해주세요.
	int n;
	cin >> n;
	int fredist = 5000;
	char fredir = ' ';

	for (int i = 0; i < n; i++)
	{
		int dist;
		cin >> dist;
		char dir;
		cin >> dir;
		if (dir == 'R')
		{
			if (dist == 1)
			{
				arr[fredist][0]++;

				if (arr[fredist][0] >= 2 && arr[fredist][1] >= 2)
				{
					arr[fredist][2] = 1;
					continue;
				}

				arr[fredist][2] = 3;
			}
			else
			{
				for (int i = fredist; i < fredist + dist; i++)
				{
					arr[i][0]++;

					if (arr[i][0] >= 2 && arr[i][1] >= 2)
					{
						arr[i][2] = 1;
						continue;
					}
					arr[i][2] = 3;

				}

				if (dist > 1)
				{
					fredist = fredist + dist;
					fredir = 'R';
				}
			}
		}
		else
		{
			if (dist == 1)
			{
				if (fredir == 'R')
				{
					fredist = fredist - 1;
					arr[fredist][1]++;

					if (arr[fredist][0] >= 2 && arr[fredist][1] >= 2)
					{
						arr[fredist][2] = 1;
						continue;
					}

					arr[fredist][2] = 2;
					continue;
				}
				arr[fredist][1]++;

				if (arr[fredist][0] >= 2 && arr[fredist][1] >= 2)
				{
					arr[fredist][2] = 1;
					continue;
				}

				arr[fredist][2] = 2;
				continue;
			}

			else
			{
				for (int i = fredist - dist; i < fredist; i++)
				{
					arr[i][1]++;

					if (arr[i][0] >= 2 && arr[i][1] >= 2)
					{
						arr[i][2] = 1;
						continue;
					}

					arr[i][2] = 2;
				}

				if (dist > 1)
				{
					fredist = fredist - dist;
					fredir = 'L';
				}
			}
		}
	}
	int cntgrey = 0;
	int cntwhite = 0;
	int cntblack = 0;
	for (int i = 0; i < 10000; i++)
	{
		if (arr[i][2] == 1)
		{
			cntgrey++;
		}
		else if (arr[i][2] == 2)
		{
			cntwhite++;
		}
		else if (arr[i][2] == 3)
		{
			cntblack++;
		}
	}
	cout << cntwhite << " " << cntblack << " " << cntgrey;
	return 0;
}