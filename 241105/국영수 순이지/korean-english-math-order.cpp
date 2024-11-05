#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class ScoreList
{
    public:
        string name;
        int kor;
        int eng;
        int mat;
        
        ScoreList()
        {
            name = "";
            kor = -1;
            eng = -1;
            mat = -1;

        }

        ScoreList(string name, int kor, int eng, int mat)
        {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->mat = mat;
        }
};

bool cmp(ScoreList a, ScoreList b)
{
    if (a.kor == b.kor)
    {
        if ( a.eng == b.eng)
        {
            return a.mat > b.mat;
        }
        return a.eng > b.eng;        
    }
    return a.kor > b.kor;
}

ScoreList a[10];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].mat;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].kor << " " << a[i].eng << " " << a[i].mat << "\n";
    }
    return 0;
}