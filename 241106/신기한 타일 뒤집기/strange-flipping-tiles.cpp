#include <iostream>
using namespace std;

int arr[100000];

int main()
{
	int n;
	cin >> n;

	int cur = 50000;

	for (int i = 0; i < n; i++)
	{
		int dist;
		char dir;
		cin >> dist >> dir;
		dist = dist -1;
		if (dir == 'L')
		{
		for (int j = cur; j >= cur-dist; j--)
		{
			arr[j] = 1; // 흰색이 1;
	
			
		}
		cur = cur - dist;
		}

		else
		{
			for (int j = cur; j<= cur+dist; j++)
			{
				arr[j] = 2; //검정이 2;
			}
			cur = cur + dist;
		}
	}

	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < 100000; i++)
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