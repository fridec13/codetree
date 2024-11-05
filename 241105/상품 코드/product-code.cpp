#include <iostream>
#include <string>
using namespace std;

class Product
{
    public:
        string input;
        int code;

        Product()
        {
            input = "codetree";
            code = 50;
        }

        Product(string input, int code)
        {
            this->input = input;
            this->input = code;
        }
        
};

int main() {
    // 여기에 코드를 작성해주세요.
    Product a;
    cout << "product " << a.code << " is " << a.input << "\n";
    cin >> a.input >> a.code;
    cout << "product " << a.code << " is " << a.input << "\n";

    return 0;
}