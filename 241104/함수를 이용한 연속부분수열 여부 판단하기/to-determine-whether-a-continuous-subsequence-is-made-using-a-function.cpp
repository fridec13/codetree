#include <iostream>
using namespace std;

int A[100];
int B[100];
int n, m;


int IsPattern(int i)
{
    for (int j = 0; j < m; j++)
    {
        if (B[j] != A[i])
        {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (IsPattern(i))
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    
    return 0;
}