#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
	// 여기에 코드를 작성해주세요.
	string input;
	cin >> input;
	int maxval = -999;
	for (int i = 0; i < input.length(); i++)
	{
		int num = 0;
		if (input[i] == '0')
		{
			input[i] = '1';
			int j = 0;
			while (j < input.length())
			{
				int binary = input[j] - '0';
				num = num * 2 + binary;
				//cout << num << "\n";
				j++;
			}
			input[i] = '0';
		}
		else if (input[i] == '1')
		{
			input[i] = '0';
			int j = 0;
			while (j < input.length())
			{
				int binary = input[j] - '0';
				num = num * 2 + binary;
				//cout << num << "\n";
				j++;
			}
			input[i] = '1';
		}
		maxval = max(num, maxval);
	}

	cout << maxval;

	return 0;
}