#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        string name;
        string address;
        string city;

        Person()
        {
            name = "";
            address = "";
            city = "";
        }

        Person(string name, string address, string city)
        {
            this->name = name;
            this->address = address;
            this->city = city;
        }
};

Person a[10];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].address >> a[i].city;
    }
    int maxstridx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[maxstridx].name < a[i].name)
        {
            maxstridx = i;
        }
    }
    cout << "name " << a[maxstridx].name << "\naddr " << a[maxstridx].address << "\ncity " << a[maxstridx].city;


    return 0;
}