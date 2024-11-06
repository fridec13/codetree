#include <iostream>
using namespace std;

int main() {

	int m1, d1, m2, d2;
	cin >> m1 >> d1 >> m2 >> d2;

	int cntday = 0;

	int month = m1;
	int day = d1;

	while (true)
	{


		if (month == m2 && day == d2)
		{
			cout << cntday;
			break;
		}

		if (day > 31)
		{
			month++;
			day = 1;
			continue;
		}

		cntday++;
		day++;
	}

	// 여기에 코드를 작성해주세요.
	return 0;
}