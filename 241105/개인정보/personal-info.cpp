#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person
{
    public:
        string name;
        int height;
        double weight;

        Person()
        {
            name = "";
            height = -1;
            weight = -1;
        }

        Person(string name, int height, double weight)
        {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

Person a[100];

bool cmp1(Person a, Person b)
{
    return a.height > b.height;
}

bool cmp2(Person a, Person b)
{
    return a.name < b.name;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i].name >> a[i].height >> a[i].weight;
    }

    cout << "name\n";
    sort(a, a+5, cmp2);
    for (int i = 0; i < 5; i++ )
    {
        cout << a[i].name;
        printf(" %d %.1f\n", a[i].height, a[i].weight);
    }
    cout << "\nheight\n";
    sort(a, a+5, cmp1);
    for (int i=0; i < 5; i++)
    {
        cout << a[i].name;
        printf(" %d %.1f\n", a[i].height, a[i].weight);
    }
    return 0;
}