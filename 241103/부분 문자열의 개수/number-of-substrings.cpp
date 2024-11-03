#include <iostream>
#include <string>
using namespace std;

int DAT[1000];
int cnt;


int main() {
    string input, sub;
    cin >> input >> sub;
    for (int i = 0; i < input.length()-1; i++)
    {
        if (input.substr(i, 2) == sub)
        {
            
            DAT[i] = 1;
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (DAT[i] == 1)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}