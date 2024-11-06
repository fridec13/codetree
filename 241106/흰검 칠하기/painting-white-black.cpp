#include <iostream>
#include <map>
using namespace std;

map<int, array<int, 3>> arr;

int main() {
	int cur = 5000; // 오프셋
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int dist;
		char dir;
		cin >> dist >> dir;
		dist = dist - 1;

		if (dir == 'L') {
			for (int i = cur; i >= cur - dist; i--) {
				arr[i][0]++;
				arr[i][2] = 1;
				if (arr[i][1] >= 2 && arr[i][0] >= 2) {
					arr[i][2] = 3;
				}
			}
			cur = cur - dist;
		} else if (dir == 'R') {
			for (int i = cur; i <= cur + dist; i++) {
				arr[i][1]++;
				arr[i][2] = 2;
				if (arr[i][1] >= 2 && arr[i][0] >= 2) {
					arr[i][2] = 3;
				}
			}
			cur = cur + dist;
		}
	}

	int cntw = 0;
	int cntb = 0;
	int cntg = 0;

	for (auto& elem : arr) {
		if (elem.second[2] == 1) cntw++;
		else if (elem.second[2] == 2) cntb++;
		else if (elem.second[2] == 3) cntg++;
	}

	cout << cntw << " " << cntb << " " << cntg;
	return 0;
}