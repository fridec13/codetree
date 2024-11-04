#include <iostream>
using namespace std;

int arr[100];
int n, m, a1, a2;



int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        cin >> a1 >> a2;
        for (int j = a1-1; j <= a2-1; j++)
        {
            sum += arr[j];
        }
        cout << sum << "\n";
    }
    return 0;
}