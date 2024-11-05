#include <iostream>
#include <string>
using namespace std;

class player
{
    public:
        string id;
        int level;

        player()
        {
            id = "codetree";
            level = 10;
        }
        
        player(string id, int level)
        {
            this->id = id;
            this->level = level;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    player a;
    cout << "user " << a.id << " lv " << a.level << "\n";
    cin >> a.id >> a.level;
    cout << "user " << a.id << " lv " << a.level << "\n";
    return 0;
}