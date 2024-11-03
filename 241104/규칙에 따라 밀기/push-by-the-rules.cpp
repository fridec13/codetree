#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, dir;
    cin >> A >> dir;
    for (int i = 0; i < dir.length(); i++)
    {
        if (dir[i] == 'L')
        {
            A = A.substr(1, A.length()-1) + A.substr(0, 1);
        }
        else
        {
            A = A.substr(A.length()-1, 1) + A.substr(0, A.length()-1);
        }
    }
    
    cout << A;

    return 0;
}