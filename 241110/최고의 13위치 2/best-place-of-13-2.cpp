#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 20

int n;
int arr[MAX_N][MAX_N];
int sum1[MAX_N][MAX_N];

bool InRange(int y, int x) {
    return (0 <= y && y < n && 0 <= x && x < n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    
    int inputcheck = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            inputcheck += arr[i][j];
        }
    }    

    if (inputcheck <= 2) {
        cout << inputcheck;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n-3; j++) {
            sum1[i][j] = arr[i][j] + arr[i][j+1] + arr[i][j+2];
        }
    }

    int maxval = -1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n-3; j++) {
            if (sum1[i][j] == 0) continue;
            
            for (int k = i; k < n; k++) {
                int start = (k == i) ? j+3 : 0;
                int end = n-2;
                
                for (int l = start; l <= end; l++) {
                    if (sum1[k][l] == 0) continue;
                    maxval = max(maxval, sum1[i][j] + sum1[k][l]);
                }
            }
        }
    }
    
    cout << maxval;
    return 0;
}