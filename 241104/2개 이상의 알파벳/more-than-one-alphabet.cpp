#include <iostream>
#include <string>
using namespace std;


bool IsDiffer(string &A)
{
	bool DAT[128] = { false };
	int cnt = 0;

	for (char i : A)
	{
		if (!DAT[i])
		{
			DAT[i] = true;
			cnt++;
			if (cnt >= 2) return true;
		}
	}

	return false;

}

int main() {
	// 여기에 코드를 작성해주세요.
	string a;
	cin >> a;
	if (IsDiffer(a))
	{
		cout << "Yes";
	}
	else cout << "No";
	return 0;
}