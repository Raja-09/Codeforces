#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int inpnum = n - 2;
    string inparr[inpnum];
    for (int i = 0; i < inpnum; i++)
        cin >> inparr[i];
    // cout << inparr[0];
    // for (int i = 1; i < inpnum; i++)
    //     cout << inparr[i][1];
    int missingindex = -1;
    for (int i = 0; i < inpnum - 1; i++)
    {

        if (inparr[i][1] != inparr[i + 1][0])
        {
            missingindex = i;
        }
    }
    cout << inparr[0][0];
    if (missingindex >= 0)
    {
        for (int i = 0; i < inpnum; i++)
        {
            cout << inparr[i][1];
            if (i == missingindex )
                cout << inparr[missingindex + 1][0];
        }
    }
    else
    {
        for(int i=0;i<inpnum;i++)
        {
            cout<<inparr[i][1];
        }
        cout<<"a";
    }
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