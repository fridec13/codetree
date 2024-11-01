#include <iostream>
using namespace std;

int cnt;

void dfs(int a, int b)
{
    if (cnt == 8)
    {
        return;
    }
    int c = b + 2*a;

    cout << c << " ";
    cnt++;

    dfs(b, c);
    
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << " ";
    dfs(a, b);

    return 0;
}