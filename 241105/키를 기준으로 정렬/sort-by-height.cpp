#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person
{
    public:
        string name;
        int height;
        int weight;

        Person()
        {
            name = "";
            height = 0;
            weight = 0;
        }

        Person(string name, int height, int weight)
        {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(Person a, Person b)
{
    return a.height < b.height;
}

Person a[10];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].height >> a[i].weight;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].height << " " << a[i].weight << "\n";
    }

    return 0;
}