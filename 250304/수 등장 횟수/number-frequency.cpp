#include <iostream>
#include <unordered_map>

using namespace std;

const int MAX_N = 100000;



int n, m;
int arr[MAX_N];
int nums[MAX_N];
int cnt;

unordered_map<int, int> arrcount;


int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arrcount[arr[i]]++;
    }

    for (int i = 0; i < m; i++) {
        cin >> nums[i];
        cout << arrcount[nums[i]] << " ";
    }


    // Please write your code here.

    return 0;
}
