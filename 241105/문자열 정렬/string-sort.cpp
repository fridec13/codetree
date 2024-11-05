#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    sort(input.begin(), input.end());
    cout << input;
    return 0;
}