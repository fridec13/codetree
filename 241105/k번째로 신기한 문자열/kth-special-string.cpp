#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int cnt;
string arr[100];

int main() {
	// 여기에 코드를 작성해주세요.
	int n, k;
	cin >> n >> k;
	string judgeword;
	cin >> judgeword;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		int flag = 0;
		for (int j = 0; j < judgeword.length(); j++)
		{
			if (arr[i][j] != judgeword[j])
			{
				flag = 1;
				break;
			}

		}
		if (flag == 0) //찾았다!
		{
			cnt++; // 찾으면 1추가
			if (cnt == k)
			{
				cout << arr[i];
				return 0;
			}
		}

	}

	return 0;
}