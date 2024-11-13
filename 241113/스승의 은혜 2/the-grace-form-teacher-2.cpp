#include <iostream>
#include <algorithm>

int n;

using namespace std;

int arr[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int b;
    cin >> b;
    //예산과 최대명수
    //반값할인 쿠폰하나 있음.
    //조합인데 dfs를 쓴다면 빠를 듯.
    //산다 안산다.
    //for 문 안에 산다 안산다 dfs를 돌리면 되기야 하겠다만
    //그냥 돌린다면?
    //전체 합이 예산보다 작다면? 
    //
    //
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    // cout << "sum " << sum << " B : " << b << "\n";

    

    sort(arr, arr+n); // 오름차순 씀.

    // for (int i =0; i <n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";
    

    if (sum <= b)
    {
        cout << n;
        return 0;
    }
    if (sum - arr[0] + arr[0]/2 <= b)
    {
        cout << n;
        return 0;
    }

    int maxcnt = 0; 

    //최대명수이므로 상식적으로 작은 수부터 빼나갈 때 가장 많은 애한테 줄 수 있음.
    for (int i = 0; i < n; i++) // 10억 번이면 1초를 초과한다. 세번을 도는 것은 좋은 판단은 아님. // 시작점을 고름.
    {
        int jflag = 0;
        for (int j = i+1; j < n; j++) //구간 마지막을 고름
        {
            if (jflag == 1) continue; // 더 봐봐야 의미가 없음.
            int segsum = 0;
            int cnt = 0;
            // 구간 마지막이 변하면 segsum은 변한다
            for (int k = i; k <= j; k++)
            {
                segsum += arr[k];
                // if (segsum > b) 
                // {
                //     jflag = 1;
                //     break;
                // }

                if (k == j)
                {
                    int last = arr[k]/2;
                    segsum = segsum - arr[k] + last;
                    if (segsum > b)
                    {
                        jflag = 1;
                        break;
                    }
                    if (segsum <= b)
                    {
                        cnt++;
                        if (k+1 < n && segsum + arr[k+1] <= b ) 
                        // 12345 가 있을 때 예산이 15까지 있을 때, 12325 는 13이므로 통과됨.
                        // 12345는 12342.5 가되므로 13.5라서 통과됨.
                        // 123444라면? 예산은 1232 + 4 = 12까지는 가능 그러나 +4를 한다면? 16이되어 불가함.
                        // 222222 일 때는? 11예산일 때
                        // 222122 라면?
                        // k+2까지 봐야할 이유가 있는가?
                        // 다음 for문을 돌면서 괜찮아질 가능성이 높음.. 가능성이라서 문제지.

                        // 1234 1232로 바뀌고 4
                        {
                            cnt++;
                        }
                    }

                }
                else if ( segsum <= b)
                {
                    cnt++;
                }

                // cout << "arr[k] " << arr[k] << " segsum " << segsum << " ";
            }
            // cout << "cnt " << cnt << "\n";
            //k for문을 다 돌으면 구간의 cnt가 출력됨.
            maxcnt = max(cnt, maxcnt);
        }
    }
    cout << maxcnt;
    return 0;
}