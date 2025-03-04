#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n, m;
string words[100000];
int nums[100000];

unordered_map<string, int> strtoint;
unordered_map<int, string> inttostr;


int maxcnt = 0;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> words[i];
        strtoint[words[i]] = i;
        inttostr[i] = words[i];
    }

    for (int i = 1; i <= m; i++)
    {
        string input;
        cin >> input;
        if (isdigit(input[0])) 
        {
            int num;
            num = stoi(input);
            cout << inttostr[num] << endl;
        }

        else cout << strtoint[input] << endl;
    }


    // Please write your code here.

    return 0;
}
