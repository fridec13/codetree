#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n;
string cmd[100000];
int k[100000];
int v[100000];

unordered_map<int, int> m;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd[i];
        cin >> k[i];
        if (cmd[i] == "add") {
            // cout << "add key " << k[i] << endl;
            cin >> v[i];
            // cout << "add value " << v[i] << endl;
            m[k[i]] = v[i];

            // cout << "add : " << m[k[i]] << endl;
        }
        else if (cmd[i] == "find")
        {
            (m[k[i]]) ? cout << m[k[i]] << "\n" : cout << "None\n";
        }
        else if (cmd[i] == "remove")
        {
            m.erase(k[i]);
        }
    }

    // Please write your code here.

    return 0;
}
