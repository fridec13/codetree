#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person
{
    public:
        string name;
        int h;
        int w;

        Person()
        {
            name = "";
            h = -1;
            w = -1;
        }

        Person(string name, int h, int w)
        {
            this->name = name;
            this->h = h;
            this->w = w;
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

Person a[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i= 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].h >> a[i].w;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].h << " " << a[i].w << "\n";
    }

    return 0;
}