#include <iostream>
#include <algorithm>

using namespace std;

int A[100];
int B[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A, A+n);
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    sort(B, B+n);
    for (int i = 0; i < n; i++)
    {
        if ( A[i] != B[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}