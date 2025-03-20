#include <iostream>
#include <unordered_map>

using namespace std;

int n, k;
int arr[100000];
int cnt = 0;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n -1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ( arr[i] + arr[j] == k) cnt++;
        }
    }


    cout << cnt;

    return 0;
}
