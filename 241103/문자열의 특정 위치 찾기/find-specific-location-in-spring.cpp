#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    char iq;
    cin >> iq;
    
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == iq)
        {
            cout << i;
            return 0;
        }
    }
    cout << "No";


    return 0;
}