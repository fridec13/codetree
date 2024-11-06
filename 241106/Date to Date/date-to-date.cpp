#include <iostream>
using namespace std;

int main() {

	int m1, d1, m2, d2;
	cin >> m1 >> d1 >> m2 >> d2;
    int date[13] = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

	int cntday = 1;

	int month = m1;
	int day = d1;

	while (true)
	{


		if (month == m2 && day == d2)
		{
			cout << cntday;
			break;
		}

		if (day > date[month])
		{
			month++;
			day = 1;
		}

		cntday++;
		day++;
	}

	// 여기에 코드를 작성해주세요.
	return 0;
}