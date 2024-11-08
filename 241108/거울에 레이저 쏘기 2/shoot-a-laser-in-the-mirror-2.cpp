#include <iostream>
using namespace std;

int n;
int curdir;

int map[1002][1002];

int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { 1, 0, -1, 0 };

//0 에서 n+1까지
//맵은 1에서 n까지
// k는 시계방향으로 위에서 아래로 들어감.
// n =4일 때 1에서 4까지
// 

bool InRange(int ny, int nx)
{
	return (0 <= ny && ny < n && 0 <= nx && nx < n);
}

// /일때의 방향선정
int slash(int curdir)
{
	if (curdir == 0) return 3;//동쪽방향이 들어오면 북쪽으로 향하게 바꾼다.
	else if (curdir == 1) return 2;//남쪽방향이 들어오면 서쪽으로 향하게 바꾼다.
	else if (curdir == 2) return 1;//서쪽방향이 들어오면 남쪽으로 향하게 바꾼다.
	else if (curdir == 3) return 0; //북쪽이 들어오면 동쪽으로 바꾼다.
}

// \일때의 방향배열
int invslash(int curdir)
{
	if (curdir == 0) return 1;//동쪽방향이 들어오면 남쪽으로 내린다.
	else if (curdir == 1) return 0;//남쪽방향이 들어오면 동쪽으로 보낸다.
	else if (curdir == 2) return 3;//서쪽방향이 들어오면 북쪽으로 보낸다.
	else if (curdir == 3) return 2; //북쪽방향이 들어오면 서쪽으로 보낸다.
}

void inputedge()
{
	for (int i = 1; i <= n; i++)
	{
		map[0][i] = i;
		map[i][n + 1] = i + n;
		map[n + 1][n - i + 1] = i + 2 * n;
		map[n - i + 1][0] = i + 3 * n;
	}
}

int Selectdir(int K)
{
	if (1 <= K && K <= n) return 1;
	else if (n + 1 <= K && K <= 2 * n) return 2;
	else if (2 * n + 1 <= K && K <= 3 * n) return 3;
	else if (3 * n + 1 <= K && K <= 4 * n) return 0;
}

// slash를 -2, invslash를 -3으로 맵에 입력한다.
// 

int main() {
	// 여기에 코드를 작성해주세요.
	cin >> n;

	// 맵수령;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			char mirror;
			cin >> mirror;
			if (mirror == '/')
			{
				map[i][j] = -2;
			}
			else
			{
				map[i][j] = -3;
			}
		}
	}
	inputedge();
	int K;
	cin >> K;
	int y = 0;
	int x = 0;
	curdir = Selectdir(K);
	for (int i = 1; i <= n; i++)
	{
		if (map[0][i] == K)
		{
			y = 0;
			x = i;
		}
		else if (map[i][n + 1] == K)
		{
			y = i;
			x = n + 1;
		}
		else if (map[n + 1][n - i - 1] == K)
		{
			y = n + 1;
			x = n - i - 1;
		}
		else if (map[n - i - 1][0] == K)
		{
			y = n - i - 1;
			x = 0;
		}
	}
	int cnt = 0;
	
	// 최악의 경우 모든맵을 순회한다.
	//cout << "y : " << y << " / x : " << x << " / curdir : " << curdir << "\n";
	//cout << map[0][K] << " " << map[1][K-1] << " " << map[1][K] << " " << map[1][K+1] << " " << "\n";
	//for (int i = 0; i <= n + 1; i++)
	//{
	//	for (int j = 0; j <= n + 1; j++)
	//	{
	//		cout << map[i][j] << " ";
	//	}
	//	cout << "\n";
	//}
	for (int i = 0; i <= n + 1; i++)
	{
		for (int j = 0; j <= n + 1; j++)
		{
			int ny = y + dy[curdir];
			int nx = x + dx[curdir];
			//방향 변경 및 y, x 이동
			if (map[ny][nx] == -2)
			{
				y = ny;
				x = nx;
				//튕길 때 마다 숫자를 센다.
				cnt++;
				curdir = slash(curdir);
			}
			else if (map[ny][nx] == -3)
			{
				y = ny;
				x = nx;
				cnt++;
				curdir = invslash(curdir);
			}
			else if (map[ny][nx] > 0)
			{
				//더 가봐야 의미가 없다.
				cout << cnt;
				return 0;
			}

		}
	}
	return 0;
}