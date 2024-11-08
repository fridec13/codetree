#include <iostream>
using namespace std;

int n, m;

int map[100][100];

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

bool InRange(int ny, int nx)
{
	return (0 <= ny && ny < n && 0 <= nx && nx < m);
}

int rotdir(int curdir)
{
	return (curdir + 1) % 4;
}

int main() {
	// 여기에 코드를 작성해주세요.
	cin >> n >> m;
	map[0][0] = 1;

	int y = 0;
	int x = 0;
	int curdir = 0;
	for (int i = 2; i <= n * m; i++)
	{
		int ny = y + dy[curdir];
		int nx = x + dx[curdir];
		if (InRange(ny, nx) && map[ny][nx] == 0)
		{
			y = ny;
			x = nx;
			map[y][x] = i;
		}
		else if (!InRange(ny, nx) || map[ny][nx] > 0)
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
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}