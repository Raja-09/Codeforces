#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int timer = 0;
    int dr = 1, dc = 1;
    int n, m;
    int rb, cb;
    int rd, cd;

    cin >> n >> m >> rb >> cb >> rd >> cd;
    if (rb != rd && cb != cd)
    {
        while (1)
        {
            ++timer;

            rb += dr;
            cb += dc;
            if (rb == n)
                dr = -1;
            if (cb == m)
                dc = -1;

            if (rb == rd || cb == cd)
                break;
        }
    }
    cout << timer;
}
void solution2()
{
    int timer = 0;
    int dr = 1, dc = 1;
    int n, m;
    int rb, cb;
    int rd, cd;

    cin >> n >> m >> rb >> cb >> rd >> cd;

    
}
int main()
{
    int t;
    // t=1;
    cin >> t;
    while (t--)
    {
        solution();
        cout << endl;
    }
}
