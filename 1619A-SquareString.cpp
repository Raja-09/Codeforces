#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string inp;
    cin>>inp;
    vector<int> count(inp.length());
    for(int i=0;i<inp.length();i++)
    {
        char temp=inp[i];
        for(int j=i;j<inp.length();j++)
        {
            if(inp[j]==temp)
                count[i]++;
        }
    }

    for(int i=0;i<count.size();i++)
        cout<<count[i]<< " ";
    int i;
    for(i=0;i<count.size();i++)
    {
        if(count[i]%2!=0)
        {
            cout<<"NO";
            break;
        }
    }
    if(i==count.size())
        cout<<"YES";
    
}
void solution2()
{
    string inp;
    cin>>inp;
    if(inp.length()%2==0)
    {
        bool isThr=false;
        for(int i=0;i<inp.length();i++)
        {
            char temp=inp[i];
            
            for(int j=i+2;j<inp.length();j++)
            {
                if(temp==inp[j])
                    isThr=true;
            }
        }
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
        cout<<endl;
    }
}
