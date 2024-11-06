#include <iostream>
using namespace std;

int arr[1000];
int offset = 500;

int main() {
	// 여기에 코드를 작성해주세요.
	int n;
	cin >> n;
	int cnt = 0;
	int fredist = 500;
	for (int i = 0; i < n; i++)
	{
		int dist;
		cin >> dist;

		char dir;
		cin >> dir;
		if (dir == 'R')
		{
			for (int i = fredist; i < fredist + dist; i++)
			{
				arr[i]++;
			}
			fredist = dist + fredist;
		}
		else
		{
			for (int i = fredist -1; i >= fredist - dist; i--)
			{
				arr[i]++;
			}
			fredist = fredist - dist;
		}
	}
	int length_space = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] >= 2)
		{
			length_space++;
		}
	}
	cout << length_space;

	return 0;
}