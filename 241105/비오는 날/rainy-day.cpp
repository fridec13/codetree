#include <iostream>
#include <string>
using namespace std;

class climate
{
public:
	string date;
	string dayofweek;
	string sky;

	climate()
	{
		date = "";
		dayofweek = "";
		sky = "";
	}

	climate(string date, string dayofweek, string sky)
	{
		this->date = date;
		this->dayofweek = dayofweek;
		this->sky = sky;
	}
};

climate a[100];

int convertdate(string date)
{
	int a = date[0] - '0';
	int b = date[1] - '0';
	int c = date[2] - '0';
	int d = date[3] - '0';
	int e = date[5] - '0';
	int f = date[6] - '0';
	int g = date[8] - '0';
	int h = date[9] - '0';

	return a * 10000000 + b * 1000000 + c * 100000 + d * 10000 + e * 1000 + f * 100 + g * 10 + h;
}


int main() {
	// 여기에 코드를 작성해주세요.
	int closestdate = 99999999;

	int n;
	cin >> n;
	string rain = "Rain";
	int closestidx = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].date >> a[i].dayofweek >> a[i].sky;
		if (a[i].sky == rain)
		{
			//int closestdate = convertdate(a[closestidx].date);
			int curdate = convertdate(a[i].date);
			if (closestdate > curdate)
			{
				closestdate = curdate;
				closestidx = i;
			}
		}
	}

	cout << a[closestidx].date << " " << a[closestidx].dayofweek << " " << a[closestidx].sky;

	return 0;
}