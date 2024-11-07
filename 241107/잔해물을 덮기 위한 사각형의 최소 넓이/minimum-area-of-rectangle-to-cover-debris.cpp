#include <iostream>
#include <algorithm>
using namespace std;

#define OFFSET 1000

int arr[2000][2000];

int main() {
	// 여기에 코드를 작성해주세요.
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	for (int i = y1 + OFFSET; i < y2 + OFFSET; i++)
	{
		for (int j = x1 + OFFSET; j < x2 + OFFSET; j++)
		{
			arr[i][j] = 1;
		}
	}
	cin >> x1 >> y1 >> x2 >> y2;
	for (int i = y1 + OFFSET; i < y2 + OFFSET; i++)
	{
		for (int j = x1 + OFFSET; j < x2 + OFFSET; j++)
		{
			arr[i][j] = 2;
		}
	}
    int cnt = 0;
	int min_y = 99999;
	int	min_x = 99999;
	int max_y = -99999;
	int	max_x = -99999;
	for (int i = 0; i < 2000; i++)
	{
		for (int j = 0; j < 2000; j++)
		{
			if (arr[i][j] == 1)
			{
				min_y = min(min_y, i);
				min_x = min(min_x, j);
				max_y = max(max_y, i);
				max_x = max(max_x, j);
                cnt++;
			}
		}
	}
    if (cnt) cout << (max_x - min_x +1) * (max_y - min_y+1);
	else cout << 0;

	return 0;
}