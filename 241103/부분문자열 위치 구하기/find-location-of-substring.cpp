#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, sub;
    cin >> input >> sub;
    int num = -1;
    if ( input.find(sub) != string::npos)
    {
        num = input.find(sub);
    }

    cout << num;
    return 0;
}