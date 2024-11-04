#include <iostream>
#include <string>
using namespace std;

bool IsPalin(string &A)
{
	int j = 0;
	for (int i = A.length() - 1; i >= 0; i--)
	{
		if (A[j] != A[i])
		{
			return false;
		}
		j++;
	}
	return true;
}

int main() {
	// 여기에 코드를 작성해주세요.
	string input;
	cin >> input;

	if (IsPalin(input))
	{
		cout << "Yes";
	}
	else cout << "No";
	return 0;
}