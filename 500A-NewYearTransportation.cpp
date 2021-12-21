#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> train(n + 1);
    vector<int> visit;
    string ans="NO";
    for (int i = 1; i < n; i++)
        cin >> train[i];

    // for (int i = 1; i < n; i++)
    //     cout << train[i] << " ";

    // cout << endl;
    for (int i = 1; i < n ;)
    {
        int temp = i + train[i];
        i=temp;
        if(i==n)
            break;
        // cout<<temp<<endl;
        if(temp==t)
            ans="YES";
    }
    if(t==1||t==n)
        ans="YES";
    cout<<ans;
}

