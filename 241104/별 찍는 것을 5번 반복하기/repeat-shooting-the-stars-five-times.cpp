#include <iostream>
using namespace std;

void Print10stars()
{
    for (int i = 0; i < 10; i++)
    {
        cout << '*';
    }
    cout << "\n";
}


int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 5; i++)
    {
        Print10stars();
    }
    return 0;
}