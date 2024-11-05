#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input1;
    string input2;
    cin >> input1 >> input2;
    sort( input1.begin(), input1.end());
    sort( input2.begin(), input2.end());
    for (int i = 0; i < max(input1.length(), input2.length()); i++)
    {
        if (input1[i] != input2[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}