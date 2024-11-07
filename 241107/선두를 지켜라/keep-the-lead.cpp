#include <iostream>
#include <algorithm>
using namespace std;

int A[1000000];
int B[1000000];
int Adist;

int main() {
	// 여기에 코드를 작성해주세요.
	int N, M;
	cin >> N >> M;
	// 속도만큼 시간만큼이동
	int cur = 1;

	for (int i = 0; i < N; i++)
	{
		int v, t;
		cin >> v >> t;
		Adist += t;
		while (t--)
		{
			A[cur] = A[cur - 1] + v;
			cur++;
		}
	}

	cur = 1;

	for (int i = 0; i < M; i++)
	{
		int v, t;
		cin >> v >> t;
		while (t--)
		{
			B[cur] = B[cur - 1] + v;
			cur++;
		}
	}
	int cnt = 0;
	int first = ' ';
	for (int i = 0; i <= Adist; i++)
	{
		//cout << A[i] << " " << B[i] << "\n";
		if (A[i] == B[i]) continue;
		else if (B[i] > A[i] && first == 'B')
		{
			continue;
		}
		else if (A[i] > B[i] && first == 'A')
		{
			continue;
		}
		else if (A[i] > B[i] && first == ' ' || first == 'B')
		{
			first = 'A';
			cnt++;
		}
		else if (B[i] > A[i] && first == ' ' || first == 'A')
		{
			first = 'B';
			cnt++;
		}


	}
	cout << cnt - 1;

	return 0;
}

// 0 1 2 4  6  8 10
// 0 1 2 3 10 15 20

// 0 1 2 6 7 9 11 13 15 17 19 21 23 25 27
// 0 2 4 6 7 8