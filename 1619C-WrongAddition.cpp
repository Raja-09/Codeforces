#include <bits/stdc++.h>
using namespace std;

int solution()
{
    int a;
    int s;
    cin >> a >> s;

    string stra = to_string(a);
    string strs = to_string(s);
    int n = stra.length();
    int m = strs.length();
    vector<int> ans;
    string num;

    int k = m - 1;
    int i;
    for (i = n - 1; i >= 0 && k>=0; i-- && k--)
    {
        // if (k >= 0)
        {
            int a1 = (int)stra[i] - 48;
            int s1 = (int)strs[k] - 48;
            //    cout<<a1<<" "<<s1;
            if (a1 <= s1)
            {
                int b1 = s1 - a1;
                // ans.push_back(b1);
                num.append(to_string(b1));
                stra.erase(i,1);
                strs.erase(k,1);
                
            }
            else if ( k==0)
                return -1;
            else
            {
                k--;
                string temp = strs.substr(k, 2);
                // cout << temp << " ";
                int s2=stoi(temp);
                if(s2>18 || s2<10)
                        return -1;
                int b1=s2-a1;
                // ans.push_back(b1);
                num.append(to_string(b1));
                stra.erase(i,1);
                strs.erase(k,2);
            }
            // cout << endl;
        }
    }
    if(stra.length()>0)
        return -1;
    else if( strs.length()==1)
        num+=strs;
    
    reverse(num.begin(),num.end());
    int val=stoi(num);
    // cout<<stra.length()<< " " <<strs.length() << " ";
    return val;
}
int main()
{
    int t;
    // t=1;
    cin >> t;
    while (t--)
    {
        cout<<solution();
        cout << endl;
    }
}

/* 
3465
4
-1
90007
10
-1
 */