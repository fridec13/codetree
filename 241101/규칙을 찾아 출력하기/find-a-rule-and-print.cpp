#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "* ";
			}
		}


		//else if (i == n - 1)
		//{
		//	for (int k = 0; k < n; k++)
		//	{
		//		cout << "* ";
		//	}
		//}

		else //1행부터 1씩 늘어나는 for문 i=1부터 시작
		{
			for (int l = 0; l < i; l++)
			{
				cout << "* ";
			}
			for (int q = 0; q < n - i - 1; q++)
			{
				cout << "  ";
			}
			cout << "* ";
		}


		cout << "\n";
	}
	return 0;
}