#include <bits/stdc++.h>
using namespace std;
bool isThr(vector<int> arr,int num)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==num)
            return true;
    }
    return false;
}

void solution()
{
    int n;
    cin>>n;
    vector<int> bruh;
    for(int i=1;i*i<=n;i++)
    {
        bruh.push_back(i*i);
    }
    for(int i=1;i*i*i<=n;i++)
    {
        if(!isThr(bruh,i*i*i))
        {
            bruh.push_back(i*i*i);
        }
    }
    cout<<bruh.size();


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
