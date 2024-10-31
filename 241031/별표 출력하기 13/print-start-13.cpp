#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < n - (i / 2); j++)
			{
				cout << "* ";
			}
		}
		else //i=1 i=3
		{
			for (int k = 0; k < (i/2+1); k++)
			{
				cout << "* ";
			}
		}
		cout << "\n";
	}
	for (int i = n; i >= 0; i--)
	{
		if (i % 2 == 1)
		{
			for (int j = 0; j < n - (i / 2); j++)
			{
				cout << "* ";
			}
		}
		else
		{
			for (int k = 0; k < (i / 2); k++)
			{
				cout << "* ";
			}
		}
		cout << "\n";
	}
	return 0;
}