#include <iostream>
using namespace std;

int cnt;

void func(int N)
{
    if (N == 1) 
    {
    cout << cnt;
    return;
    }
     
    //구하고자 하는 것은 작업의 횟수
    

    // F(N) N일때 N이 짝수면 2로 나누고 N이 홀수면 3으로 나누는 함수. 그리고 나눌 때 마다 작업의 횟수는 저장되어야함.
    if ( N % 2 == 0)
    {
        cnt++;
        func(N/2);
    }
    else 
    {
        cnt++;
        func(N/3);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    func(N);
    return 0;
}