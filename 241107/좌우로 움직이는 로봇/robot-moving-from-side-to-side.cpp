#include <iostream>
#include <algorithm>

using namespace std;

int A[1000000];
int B[1000000];

int curA = 1;
int curB = 1;

int Apos = 0;
int Bpos = 0;

int aall;
int ball;

int main() {
	// 여기에 코드를 작성해주세요.
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int t;
		char d;
		cin >> t >> d;

		aall += t;


		if (d == 'R')
		{
			while (t--)
			{
				A[curA] = A[curA - 1] + 1;
				curA++;
			}
		}
		else if (d == 'L')
		{
			while (t--)
			{
				A[curA] = A[curA - 1] - 1;
				curA++;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		int t;
		char d;
		cin >> t >> d;

		ball += t;

		if (d == 'R')
		{
			while (t--)
			{
				B[curB] = B[curB - 1] + 1;
				curB++;
			}
		}
		else if (d == 'L')
		{
			while (t--)
			{
				B[curB] = B[curB - 1] - 1;
				curB++;
			}
		}
	}

	int maxval = max(aall, ball);
	int minval = min(aall, ball);

	if (aall > ball)
	{
		for (int i = ball; i <= aall; i++)
		{
			B[i] = B[ball];
		}
	}
	else if (ball > aall)
	{
		for (int i = aall; i <= ball; i++)
		{
			A[i] = A[aall];
		}
	}


	int cnt = 0;
	for (int i = 1; i <= maxval; i++)
	{

		//cout << A[i] << " " << B[i] << "\n";
		if (A[i - 1] - B[i - 1] != 0 && A[i] == B[i])
		{
			cnt++;
		}
	}

	cout << cnt;



	return 0;
}