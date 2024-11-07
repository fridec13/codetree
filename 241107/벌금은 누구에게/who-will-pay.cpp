#include <iostream>
#include <algorithm>

using namespace std;

int student[101];



int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int M, K;
    cin >> M >> K;
    
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;
        student[num]++;
        if ( student[num] >= K)
        {
            cout << num;
            return 0;
        }
    }
    cout << -1;
    

    return 0;
}