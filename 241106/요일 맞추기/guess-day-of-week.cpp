#include <iostream>
#include <string>
using namespace std;

int main() {
	// 여기에 코드를 작성해주세요.
	int date[13] = {
		0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	int m1, d1, m2, d2;
	cin >> m1 >> d1 >> m2 >> d2;
	string yoil_list[7] = {
		"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
	};

	int cur_month = m1;
	int cur_day = d1;
	int cur_yoil = 1;
	if (cur_month > m2 || cur_month == m2 && cur_day > d2)
	{
		while (true)
		{
			if (cur_yoil < 0)
			{
				cur_yoil = 6;
			}


			if (cur_month == m2 && cur_day == d2)
			{
				cout << yoil_list[cur_yoil];
				break;
			}


			if (cur_day < 1)
			{
				cur_month--;
				cur_day = date[cur_month];
				continue;
			}

			cur_day--;
			cur_yoil--;
		}
	}
	else
	{
		while (true)
		{
			if (cur_yoil > 6)
			{
				cur_yoil = 0;
			}

			if (cur_month == m2 && cur_day == d2)
			{
				cout << yoil_list[cur_yoil];
				break;
			}



			if (cur_day > date[cur_month])
			{
				cur_month++;
				cur_day = 1;
				continue;
			}

			cur_day++;
			cur_yoil++;
		}
	}


	return 0;
}