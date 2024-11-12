#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct B
{
	string inti;
	int cnt1;
	int cnt2;
};

B Input[10];



int main() {
	// 여기에 코드를 작성해주세요.
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Input[i].inti >> Input[i].cnt1 >> Input[i].cnt2;
	}
	int checkall = 0;

	// N개는 조건이고 조건에 충족하는 세자리 수 조합을 생각한다?
	// 

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			for (int k = 1; k <= 9; k++)
			{
				int cntb = 0;
				//ijk는 조합이다? // A를 골랐다.
				for (int l = 0; l < n; l++) // n번을 돌리며 각 추정숫자를 A와 비교한다.
				{
					int cnt1check = 0;
					int cnt2check = 0;

					int input1 = Input[l].inti[0] - '0';
					int input2 = Input[l].inti[1] - '0';
					int input3 = Input[l].inti[2] - '0';

					if (input1 == i) cnt1check++;
					if (input2 == j) cnt1check++;
					if (input3 == k) cnt1check++;

					//순서가 다름을 어떻게 확인하나?
					//무식하게 한다면..?

					if (input1 != i && input1 == j || input1 == k) cnt2check++;
					if (input2 != j && input2 == i || input2 == k) cnt2check++;
					if (input3 != k && input3 == i || input3 == k) cnt2check++;

					if (cnt1check == Input[l].cnt1 && cnt2check == Input[l].cnt2)
					{
						cntb++;
					}
				}
				if (cntb == n)
				{
					checkall++;
				}
			}
		}
	}

	cout << checkall;

	return 0;
}

//A가 1에서 9까지의 서로 다른 숫자 세 개로 구성된 세 자리 수를 마음속으로 생각합니다.
//B는 1에서 9까지의 서로 다른 숫자 세 개로 구성된 세 자리 수를 A에게 묻습니다.
//B가 말한 세 자리 수에 있는 숫자들 중 하나가 A가 생각한 세 자리 수의 동일한 자리에 위치한다면 1번 카운트가 하나 올라갑니다.
//B가 말한 세 자리 수에 있는 숫자들 중 하나가 A가 생각한 세 자리 수에 있긴 하나 다른 자리에 위치하면 2번 카운트가 하나 올라갑니다.
//예를 들어, A가 123을 생각했고
//
//B가 345를 물었다면 1번 카운트는 0, 2번 카운트는 1 입니다.
//
//B가 183을 물었다면 1번 카운트는 2, 2번 카운트는 0 입니다.
//
//B가 327을 물었다면 1번 카운트는 1, 2번 카운트는 1 입니다.