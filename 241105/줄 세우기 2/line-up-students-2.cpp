#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person
{
    public:
        int h;
        int w;
        int num;

        Person()
        {
            h = -1;
            w = -1;
            num = -1;
        }

        Person(int h, int w, int num)
        {
            this->h = h;
            this->w = w;
            this->num = num;
        }
};

bool cmp(Person a, Person b)
{
    if (a.h == b.h)
    {
        return a.w > b.w;
    }
    return a.h < b.h;
}

Person a[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].h >> a[i].w;
        a[i].num = i+1;
    }

    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].h << " " << a[i].w << " " << a[i].num << "\n";
    }
    return 0;
}