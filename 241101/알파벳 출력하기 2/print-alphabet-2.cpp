#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    char alpha = 'A';
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < N-i; k++)
        {
            cout << alpha << " ";
            alpha++;
        }
        cout << "\n";
    }
    return 0;
}