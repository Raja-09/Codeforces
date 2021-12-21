#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";

    int count=0;
    int lastbutone=n;
    vector<int> magnets;
    for(int i=0;i<lastbutone;i++)
    {   
        if(arr[i]!=arr[i+1])
            count++;
    }   
    cout<<count;
}
int main()
{
    int t;
    cin >> t;
    // t=1;
    while (t--)
    {
        solution();
        return 0;
    }
    cout<<endl;
}