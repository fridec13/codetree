#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
    public:
        int h;
        int w;
        int num;

        Student()
        {
            h = -1;
            w = -1;
            num = -1;
        }

        Student(int h, int w, int num)
        {
            this->h = h;
            this->w = w;
            this->num = num;
        }
};

bool cmp(Student a, Student b)
{
    if (a.h == b.h)
    {
        if (a.w == b.w)
        {
            return a.num < b.num;
        }
        return a.w > b.w;
    }
    return a.h > b.h;
}

Student a[1000];

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