#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string input[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i =0; i < n; i++)
    {
        cin >> input[i];
    }
    sort(input, input + n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << "\n";
    }
    return 0;
}