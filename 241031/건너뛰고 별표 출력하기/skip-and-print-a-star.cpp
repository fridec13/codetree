#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n * 2 - 1; i++)
	{
		if (i < n)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << '*';
			}
			cout << "\n";
		}
		else
		{
			for (int k = (n*2-1)-i; k > 0; k--)
			{
				cout << '*';
			}
			cout << "\n";
		}
        cout << "\n";
	}
	return 0;
}