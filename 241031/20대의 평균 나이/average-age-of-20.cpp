#include <iostream>
using namespace std;

int main() {
    int a;
    double sum = 0;
    double avg = 0;
    int i = 0;
    while (true)
    {
        cin >> a;
        if (20 <= a && a <= 29)
        {
            sum += a;
            i++;
        }
        else 
        {
            break;
        }
    }
    avg = sum / i;
    printf("%.2f", avg);
    return 0;
}