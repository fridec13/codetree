#include <iostream>
using namespace std;

void PrintStar(int N)
{
    if ( N == 0) return;

    PrintStar(N-1);
    //1~N-1 까지 출력
    for (int i = 0; i < N; i++)
    {
        cout << '*';
    }
    cout << "\n";
        //N에서 N만큼 별 출력
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    PrintStar(N);
    return 0;
}