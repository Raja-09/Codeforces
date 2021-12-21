#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // for(int i=0;i<a.size();i++)    cout<<a[i]<<" " ;
        // cout << endl;
        if (n > 1)
        {
            // int m = INT_MIN;
            // for (int i = 0; i < n; i++)
            // {
            //     sort(a.begin(), a.end());
            //     int min = *min_element(a.begin(), a.end());
            //     // cout<<min<<endl;
            //     a.erase(a.begin());
            //     for (int i = 0; i < a.size(); i++)
            //     {
            //         a[i] -= min;
            //     }

            //     // for (int i = 0; i < a.size(); i++)
            //     //     cout << a[i] << " ";
            //     // cout << endl ;
            //     if (min > m)
            //         m = min;
            // }
            // cout << m << endl;

            sort(a.begin(),a.end());
            int ans = a[0];
            for (int i = 0; i < n-1; i++)
            {
                ans = max(ans, a[i + 1] - a[i]);
            }
            cout << ans<<endl;
        }
        else
            cout << a[0] << endl;
    }
}