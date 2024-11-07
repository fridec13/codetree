#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];
int cnt = 1;
int ans = -99999;
int flag;

int main() {
	// 여기에 코드를 작성해주세요.
	int n;
	cin >> n;
	int t;
	cin >> t;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		cnt++;
		if (arr[i] <= t)
		{
			cnt = 1;
			continue;
		}
		if (i == 0 || arr[i - 1] <= t && arr[i] > t)
		{
			flag = 1;
			cnt = 1;
		}
		ans = max(ans, cnt);
	}
	(flag) ? cout << ans : cout << 0;
	return 0;
}