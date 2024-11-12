#include <iostream>
#include <algorithm>

using namespace std;

int arr[5];

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    for (int i =0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int mindiff = 21e8;
    int flag = 0;

    for (int i =0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++) // 한팀 만들음.
        {
            if ( i == j ) continue;
            for (int k = 0; k < 5; k++) // 다음팀 만들음.
            {
                if ( k == i || k == j) continue;
                for (int l = k+1; l < 5; l++) // 다음팀 마지막 사람 고름. 마지막사람을 고를 때 나머지 한명은 자연스럽게 정해짐.
                {
                    if ( l == k || l == j || l == i) continue;
                    int first = arr[i] + arr[j];
                    int second = arr[k] + arr[l];
                    int third = sum - first - second;
                    if ( first == second || second == third || third == first) continue;
                    flag = 1;
                    int maxteam = max(first, max(second, third));
                    int minteam = min(first, min(second, third));
                    int diff = maxteam - minteam; // 가장 큰 팀 능력과 최소 능력의 차이
                    mindiff = min(mindiff, diff); // 위치를 다시 생각을 해야한다. 이건 잘해야한다...
                }
            }
        }
    }

    if (flag == 1) cout << mindiff;
    else cout << -1;

    return 0;
}