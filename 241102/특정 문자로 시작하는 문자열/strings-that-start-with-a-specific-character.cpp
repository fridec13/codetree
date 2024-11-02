#include <iostream>
#include <string>
using namespace std;

string input[20];

double sum;
double cnt;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    char classfier;
    cin >> classfier;

    for (int i = 0; i < n; i++)
    {
        if (input[i][0] == classfier)
        {
            sum += input[i].length();
            cnt = cnt + 1;
        }
    }

    printf("%.0f %.2f", cnt, sum/cnt);
    return 0;
}