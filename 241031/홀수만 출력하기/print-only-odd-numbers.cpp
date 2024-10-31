#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i =0; i < N; i++)
    {
        int input;
        cin >> input;
        if (input % 2 == 1 && input % 3 == 0)
        {
            cout << input << "\n";
        }
    }
    return 0;
}