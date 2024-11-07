#include <iostream>
#include <algorithm>

using namespace std;

int A[500000];
int B[500000];
int cur = 0;
int Aalldist = 0;
int Balldist = 0;
int timeflow = 0;
int timeflowB = 0;
int Bcur = 0;


int main() {
	int N, M;
	cin >> N >> M;

	// A 배열에 경로 기록
	for (int i = 0; i < N; i++) {
		char dir;
		int dist;
		cin >> dir >> dist;
		Aalldist += dist;


		if (dir == 'R') {
			for (int j = cur; j < cur + dist; j++) {
				A[timeflow] = j;
				timeflow++;
			}
			cur += dist;
		}
		else if (dir == 'L') {
			for (int j = cur; j > cur - dist; j--) {
				A[timeflow] = j;
				timeflow++;
			}
			cur -= dist;
		}
	}
	// cout << "A complete\n";

	// B 배열에 경로 기록 (timeflow, cur 초기화)

	for (int i = 0; i < M; i++) {
		char dir;
		int dist;
		cin >> dir >> dist;
		Balldist += dist;

		if (dir == 'R') {
			for (int j = Bcur; j < Bcur + dist; j++) {
				B[timeflowB] = j;
				timeflowB++;
			}
			Bcur += dist;
		}
		else if (dir == 'L') {
			for (int j = Bcur; j > Bcur - dist; j--) {
				B[timeflowB] = j;
				timeflowB++;
			}
			Bcur -= dist;
		}
	}
	// cout << "B complete\n";
	int maxval = max(Aalldist, Balldist);

	// cout << maxval << "\n";
	//return 0;

	// 두 배열의 동일 위치에서 처음 만나는 시간을 출력
	for (int i = 0; i < maxval; i++) {
		//cout << "time" << i << ":" << A[i] << " " << B[i] << "\n";

		if (A[i] == B[i] && i != 0) {
			cout << i;
			return 0;
		}
	}

	// 만나는 시간이 없을 경우
	cout << -1;
	return 0;
}