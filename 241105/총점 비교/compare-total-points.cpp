#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Scorelist
{
    public:
        string name;
        int kor;
        int eng;
        int mat;

        Scorelist()
        {
            name = "";
            kor = -1;
            eng = -1;
            mat = -1;
        }

        Scorelist(string name, int kor, int eng, int mat)
        {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->mat = mat;
        }
};

bool cmp(Scorelist a, Scorelist b)
{
    return a.kor + a.eng + a.mat < b.kor + b.eng + b.mat;
}

Scorelist a[10];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].mat;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].kor << " "<< a[i].eng << " " << a[i].mat << "\n";
    }
    return 0;
}