#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	int sub = n;
	while (true)
	{
		sub = sub / i;

		if (sub <= 1)
		{
			break;
		}

		// cout << sub << " ";
		i++;

	}
	cout << i;

	return 0;
}