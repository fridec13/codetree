#include <iostream>
#include <algorithm>

using namespace std;

int A[200000];
int B[200000];
int cur = 100000;
int Aalldist;
int Balldist;

int main() {
	// 여기에 코드를 작성해주세요.

	int N, M;
	cin >> N >> M;
	int t = 0;

	for (int i = 0; i < N; i++)
	{
		char dir;
		int dist;
		cin >> dir >> dist;
		Aalldist = Aalldist + dist;
		// dist = dist - 1;
		if (dir == 'R')
		{
			for (int j = cur; j < cur + dist; j++)
			{
				A[t] = j - 100000;
				t++;
			}
			cur = cur + dist;
		}
		else if (dir == 'L')
		{
			for (int j = cur; j > cur - dist; j--)
			{
				A[t] = j - 100000;
				t++;
			}
			cur = cur - dist;
		}
	}

	t = 0;
	cur = 50000;

	for (int i = 0; i < M; i++)
	{
		char dir;
		int dist;
		cin >> dir >> dist;
		Balldist = Balldist + dist;
		if (dir == 'R')
		{
			for (int j = cur; j < cur + dist; j++)
			{
				B[t] = j - 100000;
				t++;
			}
			cur = cur + dist;
		}
		else if (dir == 'L')
		{
			for (int j = cur; j > cur - dist; j--)
			{
				B[t] = j - 100000;
				t++;
			}
			cur = cur - dist;
		}

	}
	int flag = 0;

	for (int i = 0; i < max(Aalldist, Balldist); i++)
	{
		//cout << "time" << i << ":" << A[i] << " " << B[i] << "\n";
		if (A[i] == B[i] && i != 0)
		{
			cout << i;
			return 0;
		}
	}
	//for (int i = 0; i < 10000; i++)
	//{
	//    if (A[i] == B[i])
	//    {
	//        flag = i;
	//        break;
	//    }
	//}
	//int d = 1;

	//(flag) ? cout << flag : cout << -1; 
	cout << -1;
	return 0;
}