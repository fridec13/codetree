#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    if ( input.find("ee") != string::npos)
    {
        cout << "Yes ";
    }
    else cout << "No ";
    (input.find("ab") != string::npos) ? cout << "Yes " : cout << "No ";
    return 0;
}