#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int n;

int goal[1003]; // 최대 방 갯수

int StepArr(int idx)
{
	return (idx % n); //1003 == 0으로 출력 1002가 마지막 인덱스임.
}

//인접한 원소는 접근할 수 있다.


int main() {
	// 여기에 코드를 작성해주세요.
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> goal[i];
	}
	int minval = INT_MAX;
	int cnt = 0;
	int dist = 0; // 전체 인원 거리
	for (int i = 0; i < n; i++) //출발 하는 방 고르기
	{
		cnt = 0;
		dist = 0;
		for (int j = i + 1; j < n + i; j++)//무조건 한바퀴 순회하는 for문
		{
			cnt++;
			int arridx = StepArr(j);
			dist = dist + goal[arridx] * cnt;
			//cout << dist << "\n";
		}
		//cout << "finaldist" << dist << "\n";
		minval = min(dist, minval);
	}
	cout << minval;
	return 0;
}