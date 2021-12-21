#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    int d;
    int ans;
    for (int i = 0; i < n; i++)
    {
        d = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % d == 0 && arr[j + 1] % d != 0)
            {
                count++;
                ans = d;
            }
        }
    }
    cout << count;
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<< " ";
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

    return 0;
}
