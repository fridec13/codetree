#include <iostream>
#include <algorithm>

using namespace std;

// L == 흰색
// R == 검정색
int st[100];
int ed[100];

int arr[200];

int main()
{
	int n;
	cin >> n;
	
	int cur = 100;

	for (int i = 0; i < n; i++)
	{
		int dist;
		char dir;
		cin >> dist >> dir;

		if (dir == 'L')
		{
			st[i] = cur - dist;
			ed[i] = cur;
			cur = cur - dist;
		}
		else
		{
			st[i] = cur;
			ed[i] = cur + dist;
			cur = cur + dist;
		}
		for (int j = st[i]; j < ed[i]; j++)
		{
			if (dir == 'L')
			{
				arr[j] = 1; // 흰색이 1;
			}
			else
			{
				arr[j] = 2; //검정이 2;
			}
		}
	}
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < 200; i++)
	{
		if (arr[i] == 1)
		{
			cnt1++;
		}
		else if (arr[i] == 2)
		{
			cnt2++;
		}
	}

	cout << cnt1 << " " << cnt2;
}