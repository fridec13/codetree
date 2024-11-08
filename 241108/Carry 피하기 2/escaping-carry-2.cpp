#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

string arr[20];


int notCarry(string i, string j, string k)
{
    int num1[10000] = {};
    int num2[10000] = {};
    int num3[10000] = {};

    int cnt = 9999;

    int maxjari = max(i.length(), max(j.length(), k.length()));
    for (int q = i.length() - 1; q >= 0; q--)
    {
        int inum = i[q] - '0';
        num1[cnt] = inum;
        cnt--;
    }

    cnt = 9999;
    for (int p = j.length() - 1; p >= 0; p--)
    {
        int jnum = j[p] - '0';
        num2[cnt] = jnum;
        cnt--;
    }

    cnt = 9999;
    for (int l = k.length() - 1; l >= 0; l--)
    {
        int knum = k[l] - '0';
        num3[cnt] = knum;
        cnt--;
    }
    
    // string 4라면 9996 9997, 9998,9999 까지 조회해야함; 10000-maxjari 값부터 조회함.

    string carry = "";

    for (int i = 10000-maxjari; i < 10000; i++)
    {
        if (num1[i] + num2[i] + num3[i] >= 10)
        {
            return -1;
        }
        else if (num1[i] + num2[i] + num3[i] < 10)
        {
            int carryint = num1[i] + num2[i] + num3[i];
            
            char carrychar = carryint + '0';

            carry = carry + carrychar;

        }
    }

    return stoi(carry);
    
}



int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxval = INT_MIN;

    for (int i = 0; i < n; i++) // 숫자 하나 고름.
    {
        for (int j = i+1; j < n; j++) // 숫자 두번째 고름.
        {
            for (int k = j + 1; k < n; k++) // 숫자 세번째 고름.
            {
                //스트링으로 받았으니 처리가 필요함.
                if (notCarry(arr[i], arr[j], arr[k]) != -1)
                {
                    maxval = max(maxval, notCarry(arr[i], arr[j], arr[k]));
                }
                else if (notCarry(arr[i], arr[j], arr[k]) == -1)
                {
                    continue;
                }
            }
        }
    }

    if (maxval == INT_MIN)
    {
        cout << -1;
    }
    else cout << maxval;
    return 0;
}