#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;

    cin >> a >> b >> c;

    int a_leng = a.length();
    int b_leng = b.length();
    int c_leng = c.length();
    
    int a1 = a_leng - b_leng;
    int b1 = b_leng - c_leng;
    int c1 = c_leng - a_leng;

    if ( a1 < 0 ) a1 = a1 * (-1);
    if ( b1 < 0 ) b1 = b1 * (-1);
    if ( c1 < 0 ) c1 = c1 * (-1);

    if ( a1 >= b1 && a1 >= c1) cout << a1;
    else if (b1 >= a1 && b1 >= c1 ) cout << b1;
    else if (c1 >= a1 && c1 >= b1 ) cout << c1;
    return 0;
}