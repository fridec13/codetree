#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

// int arr[100][100]

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    int cnt = 0;
    for (int i = 0; i < a.length(); i++)
    {
        // int visited[a.length()] = {};
        if (a[i] == '(')
        {
            for (int j = i+1; j < a.length(); j++)
            {
                if (a[j] == ')')
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}