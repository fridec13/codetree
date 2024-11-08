#include <iostream>
#include <climits>
#include <string>

using namespace std;

int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    string input;
    cin >> input;
    // cout << n << input << "\n";
    int cnt = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'C')
        {
            for (int j = i+1; j < input.length(); j++)
            {
                if (input[j] == 'O')
                {
                    for (int k = j + 1; k < input.length(); k++)
                    {
                        if ( input[k] == 'W')
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}