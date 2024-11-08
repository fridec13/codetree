#include <iostream>

using namespace std;

int n;

int map[100][100];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

bool InRange(int ny, int nx)
{
	return (0 <= ny && ny < n && 0 <= nx && nx < n);
}

int rotdir(int curdir)
{
	return (curdir + 1) % 4;
}

int main()
{
	cin >> n;

	map[n - 1][n - 1] = n * n;
	int x = n - 1;
	int y = n - 1;
	int curdir = 0;
	for (int i = n * n - 1; i >= 1; i--)
	{
		int ny = y + dy[curdir];
		int nx = x + dx[curdir];

		if (!InRange(ny, nx) || map[ny][nx] > 0)
		{
			curdir = rotdir(curdir);

			ny = y + dy[curdir];
			nx = x + dx[curdir];
			if (InRange(ny, nx) && map[ny][nx] == 0)
			{
				y = ny;
				x = nx;
				map[y][x] = i;
			}
		}

		else if (InRange(ny, nx) && map[ny][nx] == 0)
		{
			y = ny;
			x = nx;
			
			map[y][x] = i;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
}