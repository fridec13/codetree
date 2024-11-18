#include <iostream>
#include <algorithm>

using namespace std;

int n;

//선물하나를 정해서 반값할인
//최대명수 출력
struct Student
{
    int price;
    int sentpee;
};

Student arr[1000];

bool cmp(Student a, Student b)
{
    return a.price + a.sentpee < b.price + b.sentpee;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int b;
    cin >> n >> b;
    int allsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].price >> arr[i].sentpee;
        allsum = allsum + arr[i].price + arr[i].sentpee;
    }

    if (b >= allsum)
    {
        cout << n;
        return 0;
    }

    int maxval = -1;

    for (int i = 0; i < n; i++) // 할인 제품 고르기
    {
        arr[i].price = arr[i].price / 2;
        int sum = 0;
        int cnt = 0;
        sort(arr, arr+n, cmp);
        for (int j = 0; j < n; j++) // 확인
        {
            sum = sum + arr[j].price + arr[j].sentpee;
            if (sum > b) break;
            cnt++;
        }
        maxval = max(cnt, maxval);
        arr[i].price = arr[i].price * 2;        
    }

    cout << maxval;
    return 0;
}