#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n;
string words[100000];

unordered_map<string, int> stringcnt;
int maxcnt = 0;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
        stringcnt[words[i]]++;
        if (maxcnt < stringcnt[words[i]]) maxcnt = stringcnt[words[i]];
    }

    cout << maxcnt;

    // Please write your code here.

    return 0;
}
